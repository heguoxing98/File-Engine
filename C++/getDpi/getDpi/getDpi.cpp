﻿// getDpi.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <Windows.h>
#include <iostream>
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Gdi32.lib")

using namespace std;

double getDpi();

int main()
{
    double dpi = getDpi();
    cout << dpi;
}

/**
 * 获取Windows缩放等级，适配高DPI
 */
double getDpi()
{
    SetProcessDPIAware();
    // Get desktop dc
    HDC desktopDc = GetDC(nullptr);
    // Get native resolution
    const int dpi = GetDeviceCaps(desktopDc, LOGPIXELSX);
    auto ret = 1 + (dpi - 96.0) / 24.0 * 0.25;
    if (ret < 1)
    {
        ret = 1;
    }

    ReleaseDC(nullptr, desktopDc);
    return ret;
}