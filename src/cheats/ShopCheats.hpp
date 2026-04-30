#pragma once
#include <geode/loader/Mod.hpp>

class ShopCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void infiniteGems();
    static void infiniteCredits();
    static void infiniteStars();
    static void unlockAllShips();
    static void unlockAllBalls();
    static void unlockAllColors();
    static void unlockAllGlowColors();
    static void unlockAllShaders();
    static void unlockAllEffects();
    static void unlockAllItems();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
