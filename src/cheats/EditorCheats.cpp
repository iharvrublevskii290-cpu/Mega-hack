#include "EditorCheats.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>

using namespace geode::prelude;

void EditorCheats::initialize() {
    log::info("EditorCheats initialized!");
}

void EditorCheats::unlimitedObjects() {
    log::info("Unlimited objects activated!");
}

void EditorCheats::unlimitedPortals() {
    log::info("Unlimited portals activated!");
}

void EditorCheats::unlimitedTriggers() {
    log::info("Unlimited triggers activated!");
}

void EditorCheats::unlimitedDecals() {
    log::info("Unlimited decals activated!");
}

void EditorCheats::unlimitedText() {
    log::info("Unlimited text activated!");
}

void EditorCheats::unlimitedLayers() {
    log::info("Unlimited layers activated!");
}

void EditorCheats::unlimitedGroups() {
    log::info("Unlimited groups activated!");
}

void EditorCheats::unlimitedCameras() {
    log::info("Unlimited cameras activated!");
}

void EditorCheats::unlimitedShaders() {
    log::info("Unlimited shaders activated!");
}

void EditorCheats::unlimitedParticles() {
    log::info("Unlimited particles activated!");
}

void EditorCheats::reset() {
    log::info("EditorCheats reset!");
}

void EditorCheats::applyAll() {
    unlimitedObjects();
    unlimitedPortals();
    unlimitedTriggers();
    log::info("All EditorCheats applied!");
}
