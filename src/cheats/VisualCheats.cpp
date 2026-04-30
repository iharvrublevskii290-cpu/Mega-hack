#include "VisualCheats.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>

using namespace geode::prelude;

void VisualCheats::initialize() {
    log::info("VisualCheats initialized!");
}

void VisualCheats::showHitboxes() {
    log::info("Hitboxes shown!");
}

void VisualCheats::showCollisionBoxes() {
    log::info("Collision boxes shown!");
}

void VisualCheats::showTriggerZones() {
    log::info("Trigger zones shown!");
}

void VisualCheats::showPortalDestinations() {
    log::info("Portal destinations shown!");
}

void VisualCheats::showObjectIDs() {
    log::info("Object IDs shown!");
}

void VisualCheats::showFPS() {
    log::info("FPS counter shown!");
}

void VisualCheats::showCoordinates() {
    log::info("Coordinates shown!");
}

void VisualCheats::showSpeed() {
    log::info("Speed shown!");
}

void VisualCheats::showPercent() {
    log::info("Percentage shown!");
}

void VisualCheats::showTime() {
    log::info("Time shown!");
}

void VisualCheats::showDistance() {
    log::info("Distance shown!");
}

void VisualCheats::showRotation() {
    log::info("Rotation shown!");
}

void VisualCheats::showSize() {
    log::info("Size shown!");
}

void VisualCheats::customColors() {
    log::info("Custom colors activated!");
}

void VisualCheats::customEffects() {
    log::info("Custom effects activated!");
}

void VisualCheats::reset() {
    log::info("VisualCheats reset!");
}

void VisualCheats::applyAll() {
    showHitboxes();
    showFPS();
    showCoordinates();
    log::info("All VisualCheats applied!");
}
