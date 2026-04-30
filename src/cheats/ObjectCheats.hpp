#pragma once
#include <geode/loader/Mod.hpp>

class ObjectCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void destroyAllObjects();
    static void destroySpikes();
    static void destroyBlocks();
    static void destroyOrbs();
    static void destroyPortals();
    static void destroyShaders();
    static void destroyParticles();
    static void destroyTriggers();
    static void destroyDecals();
    static void destroyText();
    static void hideObjects();
    static void showHiddenObjects();
    static void selectAllObjects();
    static void copyAllObjects();
    static void pasteAllObjects();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
