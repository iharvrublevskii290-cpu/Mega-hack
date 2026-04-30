#pragma once
#include <geode/loader/Mod.hpp>

class VisualCheats {
public:
    static void initialize();
    
    // Individual cheat methods
    static void showHitboxes();
    static void showCollisionBoxes();
    static void showTriggerZones();
    static void showPortalDestinations();
    static void showObjectIDs();
    static void showFPS();
    static void showCoordinates();
    static void showSpeed();
    static void showPercent();
    static void showTime();
    static void showDistance();
    static void showRotation();
    static void showSize();
    static void customColors();
    static void customEffects();
    
    // Utility methods
    static void reset();
    static void applyAll();
};
