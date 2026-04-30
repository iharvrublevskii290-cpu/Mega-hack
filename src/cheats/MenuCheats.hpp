#pragma once
#include <geode/loader/Mod.hpp>

class MenuCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void skipIntro();
    static void unlockAllMenus();
    static void customMenuMusic();
    static void customMenuBackground();
    static void instantLoad();
    static void noMenuDelay();
    static void customMenuColors();
    static void customMenuEffects();
    static void showDebugMenu();
    static void quickAccess();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
