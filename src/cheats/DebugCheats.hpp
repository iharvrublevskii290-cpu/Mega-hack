#pragma once
#include <geode/loader/Mod.hpp>

class DebugCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void showMemoryUsage();
    static void showObjectCount();
    static void showFrameTime();
    static void showDrawCalls();
    static void showActiveCheats();
    static void logAllEvents();
    static void showPerformance();
    static void showLevelInfo();
    static void showPlayerInfo();
    static void showAudioInfo();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
