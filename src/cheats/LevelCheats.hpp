#pragma once
#include <geode/loader/Mod.hpp>

class LevelCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void godMode();
    static void infiniteOrbs();
    static void superSpeed();
    static void slowMotion();
    static void freezeTime();
    static void flipGravity();
    static void teleport();
    static void warpToPercent(float percent);
    static void skipObstacles();
    static void webhookSkip();
    static void infiniteShips();
    static void ballMode();
    static void ufoMode();
    static void spiderMode();
    static void robotMode();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
