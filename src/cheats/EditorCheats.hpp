#pragma once
#include <geode/loader/Mod.hpp>

class EditorCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void unlimitedObjects();
    static void unlimitedPortals();
    static void unlimitedTriggers();
    static void unlimitedDecals();
    static void unlimitedText();
    static void unlimitedLayers();
    static void unlimitedGroups();
    static void unlimitedCameras();
    static void unlimitedShaders();
    static void unlimitedParticles();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
