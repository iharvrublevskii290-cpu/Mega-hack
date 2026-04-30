#pragma once
#include <geode/loader/Mod.hpp>

class PlayerCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void infiniteJump();
    static void highJump();
    static void lowJump();
    static void fastJump();
    static void slowJump();
    static void flyMode();
    static void phaseThrough();
    static void sizeChange(float size);
    static void speedChange(float speed);
    static void invincibility();
    static void unbreakable();
    static void noDeath();
    static void autoRestart();
    static void quickRestart();
    static void instantRestart();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
