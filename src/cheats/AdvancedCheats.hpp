#pragma once
#include <geode/loader/Mod.hpp>

class AdvancedCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void customLevelData();
    static void customPlayerData();
    static void customUserData();
    static void customSettings();
    static void customColors();
    static void customEffects();
    static void customAnimations();
    static void customParticles();
    static void customShaders();
    static void godMode();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
