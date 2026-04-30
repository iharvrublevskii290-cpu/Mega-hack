#include "PlayerCheats.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>

using namespace geode::prelude;

void PlayerCheats::initialize() {
    log::info("PlayerCheats initialized!");
}

void PlayerCheats::infiniteJump() {
    log::info("Infinite Jump activated!");
}

void PlayerCheats::highJump() {
    log::info("High Jump activated!");
}

void PlayerCheats::lowJump() {
    log::info("Low Jump activated!");
}

void PlayerCheats::fastJump() {
    log::info("Fast Jump activated!");
}

void PlayerCheats::slowJump() {
    log::info("Slow Jump activated!");
}

void PlayerCheats::flyMode() {
    log::info("Fly Mode activated!");
}

void PlayerCheats::phaseThrough() {
    log::info("Phase Through activated!");
}

void PlayerCheats::sizeChange(float size) {
    log::info("Size changed to " + std::to_string(size));
}

void PlayerCheats::speedChange(float speed) {
    log::info("Speed changed to " + std::to_string(speed));
}

void PlayerCheats::invincibility() {
    log::info("Invincibility activated!");
}

void PlayerCheats::unbreakable() {
    log::info("Unbreakable activated!");
}

void PlayerCheats::noDeath() {
    log::info("No Death activated!");
}

void PlayerCheats::autoRestart() {
    log::info("Auto Restart activated!");
}

void PlayerCheats::quickRestart() {
    log::info("Quick Restart activated!");
}

void PlayerCheats::instantRestart() {
    log::info("Instant Restart activated!");
}

void PlayerCheats::reset() {
    log::info("PlayerCheats reset!");
}

void PlayerCheats::applyAll() {
    infiniteJump();
    invincibility();
    noDeath();
    log::info("All PlayerCheats applied!");
}
