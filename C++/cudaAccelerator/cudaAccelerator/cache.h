﻿#pragma once
#include <atomic>
#include <mutex>
#include <concurrent_unordered_set.h>

/**
 * \brief 存储数据结构
 * remain_blank_num：当前dev_cache_str有多少空闲空间，每一块大小为MAX_PATH_LENGTH
 * record_num：当前有多少个record，每个record长度为MAX_PATH_LENGTH
 * record_hash：每个record的hash，用于判断重复
 */
using cache_data = struct cache_data
{
    char* dev_strs = nullptr;
    size_t* dev_str_addr = nullptr;
    size_t* str_length = nullptr;
    std::atomic_uint64_t remain_blank_num;
    std::atomic_uint64_t record_num;
    std::mutex lock;
    concurrency::concurrent_unordered_set<size_t> record_hash;
};


/**
 * \brief 缓存struct
 * str_data：数据struct
 * dev_output：字符串匹配后输出位置，下标与cache_data中一一对应，dev_output中数据为1代表匹配成功
 * is_cache_valid：数据是否有效
 * is_match_done：是否匹配全部完成 
 * is_output_done：是否已经存入容器 0 代表没有开始  1 代表正在收集  2代表完成
 */
using list_cache = struct cache_struct
{
    cache_data str_data;
    char* dev_output = nullptr;
    bool is_cache_valid = false;
    std::atomic_bool is_match_done;
    std::atomic_int is_output_done;
};


using stop_signal = struct stop_signal_struct
{
    bool is_stop_collect = false;
    bool* dev_is_stop_collect = nullptr;
};

std::string get_cache_info(const std::string& key, const list_cache* cache);
bool is_stop();
void set_stop(bool b);
void init_stop_signal();
bool* get_dev_stop_signal();
void free_stop_signal();
