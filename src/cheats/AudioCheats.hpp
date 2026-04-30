#pragma once
#include <geode/loader/Mod.hpp>

class AudioCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void muteMusic();
    static void muteSFX();
    static void customMusic();
    static void customSFX();
    static void volumeBoost();
    static void bassBoost();
    static void trebleBoost();
    static void equalizer();
    static void audioSpeed();
    static void noAudioDelay();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
