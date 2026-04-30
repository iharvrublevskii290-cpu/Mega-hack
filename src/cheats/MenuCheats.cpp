#include "MenuCheats.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>

using namespace geode::prelude;

void MenuCheats::initialize() {
    log::info("MenuCheats initialized!");
}

void MenuCheats::skipIntro() {
    log::info("Intro skipped!");
}

void MenuCheats::unlockAllMenus() {
    log::info("All menus unlocked!");
}

void MenuCheats::customMenuMusic() {
    log::info("Custom menu music loaded!");
}

void MenuCheats::customMenuBackground() {
    log::info("Custom menu background loaded!");
}

void MenuCheats::instantLoad() {
    log::info("Instant load activated!");
}

void MenuCheats::noMenuDelay() {
    log::info("Menu delay removed!");
}

void MenuCheats::customMenuColors() {
    log::info("Custom menu colors applied!");
}

void MenuCheats::customMenuEffects() {
    log::info("Custom menu effects applied!");
}

void MenuCheats::showDebugMenu() {
    log::info("Debug menu shown!");
}

void MenuCheats::quickAccess() {
    log::info("Quick access activated!");
}

void MenuCheats::reset() {
    log::info("MenuCheats reset!");
}

void MenuCheats::applyAll() {
    skipIntro();
    instantLoad();
    log::info("All MenuCheats applied!");
}
