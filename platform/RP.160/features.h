#define FEATURE_VRAM_RGBA

//enable XCM only in full build
#ifndef ML_MINIMAL_OBJ
#define CONFIG_COMPOSITOR_XCM
// DEDICATED_LAYER not yet implemented
//#define CONFIG_COMPOSITOR_DEDICATED_LAYER
#endif

#define FEATURE_SHOW_SHUTTER_COUNT

#define CONFIG_TSKMON
#define FEATURE_SHOW_TASKS
#define FEATURE_SHOW_CPU_USAGE
#define FEATURE_SHOW_GUI_EVENTS

#define FEATURE_GLOBAL_DRAW

#define FEATURE_SCREENSHOT

#undef CONFIG_CRASH_LOG
#undef CONFIG_ADDITIONAL_VERSION
#undef CONFIG_PROP_REQUEST_CHANGE
#undef CONFIG_AUTOBACKUP_ROM