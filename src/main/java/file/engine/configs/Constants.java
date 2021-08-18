package file.engine.configs;

public class Constants {
    public static final String version = "3.3"; //TODO 更改版本号

    public static final int ALL_TABLE_NUM = 40;

    public static final int THREAD_POOL_AWAIT_TIMEOUT = 5;

    public static final int UPDATE_DATABASE_THRESHOLD = 3;

    public static final int MIN_FRAME_VISIBLE_TIME = 500;

    public static final int MAX_PATTERN_CACHE_NUM = 20;

    public static final String FILE_NAME = "File-Engine-x64.exe";
    public static final String LAUNCH_WRAPPER_NAME = "File-Engine.exe";

    public static final int MAX_SQL_NUM = 5000;

    public static final int PLUGIN_API_VERSION = 5;
    public static final int MAX_SUPPORT_API_DIFFERENCE = 2;

    public static final int defaultLabelColor = 0xff9933;
    public static final int defaultWindowBackgroundColor = 0xffffff;
    public static final int defaultBorderColor = 0;
    public static final int defaultFontColor = 0;
    public static final int defaultFontColorWithCoverage = 0xff3333;
    public static final int defaultSearchbarColor = 0xffffff;
    public static final int defaultSearchbarFontColor = 0;
    public static final int MAX_RESULTS_COUNT = 200;

    public static final String defaultSwingTheme = "MaterialLighter";

    public static final String RESULT_LABEL_NAME_HOLDER = "filled";

    public static class Enums {

        public enum DatabaseStatus {
            NORMAL, VACUUM, MANUAL_UPDATE
        }

        public enum DownloadStatus {
            DOWNLOAD_DONE, DOWNLOAD_ERROR, DOWNLOAD_DOWNLOADING, DOWNLOAD_INTERRUPTED, DOWNLOAD_NO_TASK
        }

        public enum ShowingSearchBarMode {
            NORMAL_SHOWING, EXPLORER_ATTACH
        }

        public enum RunningMode {
            NORMAL_MODE, COMMAND_MODE, PLUGIN_MODE
        }

        public static class ProxyType {
            public static final int PROXY_HTTP = 0x100;
            public static final int PROXY_SOCKS = 0x200;
            public static final int PROXY_DIRECT = 0x300;
        }

        public enum SwingThemes {
            CoreFlatDarculaLaf, CoreFlatDarkLaf, CoreFlatLightLaf, CoreFlatIntelliJLaf,
            Arc, ArcDark, ArcDarkOrange, Carbon,
            CyanLight, DarkFlat, DarkPurple, Dracula,
            Gray, LightFlat, MaterialDesignDark, Monocai,
            Nord, OneDark, MaterialDarker, MaterialLighter
        }

        public enum BorderType {
            EMPTY, AROUND, FULL
        }
    }
}