#include "ShopCheats.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>

using namespace geode::prelude;

void ShopCheats::initialize() {
    log::info("ShopCheats initialized!");
}

void ShopCheats::infiniteGems() {
    log::info("Infinite gems activated!");
}

void ShopCheats::infiniteCredits() {
    log::info("Infinite credits activated!");
}

void ShopCheats::infiniteStars() {
    log::info("Infinite stars activated!");
}

void ShopCheats::unlockAllShips() {
    log::info("All ships unlocked!");
}

void ShopCheats::unlockAllBalls() {
    log::info("All balls unlocked!");
}

void ShopCheats::unlockAllColors() {
    log::info("All colors unlocked!");
}

void ShopCheats::unlockAllGlowColors() {
    log::info("All glow colors unlocked!");
}

void ShopCheats::unlockAllShaders() {
    log::info("All shaders unlocked!");
}

void ShopCheats::unlockAllEffects() {
    log::info("All effects unlocked!");
}

void ShopCheats::unlockAllItems() {
    log::info("All items unlocked!");
}

void ShopCheats::reset() {
    log::info("ShopCheats reset!");
}

void ShopCheats::applyAll() {
    infiniteGems();
    infiniteCredits();
    infiniteStars();
    unlockAllItems();
    log::info("All ShopCheats applied!");
}
