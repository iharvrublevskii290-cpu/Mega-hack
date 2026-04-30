#include "DebugCheats.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>

using namespace geode::prelude;

void DebugCheats::initialize() {
    log::info("DebugCheats initialized!");
}

void DebugCheats::showMemoryUsage() {
    log::info("Memory usage shown!");
}

void DebugCheats::showObjectCount() {
    log::info("Object count shown!");
}

void DebugCheats::showFrameTime() {
    log::info("Frame time shown!");
}

void DebugCheats::showDrawCalls() {
    log::info("Draw calls shown!");
}

void DebugCheats::showActiveCheats() {
    log::info("Active cheats shown!");
}

void DebugCheats::logAllEvents() {
    log::info("All events logging enabled!");
}

void DebugCheats::showPerformance() {
    log::info("Performance stats shown!");
}

void DebugCheats::showLevelInfo() {
    log::info("Level info shown!");
}

void DebugCheats::showPlayerInfo() {
    log::info("Player info shown!");
}

void DebugCheats::showAudioInfo() {
    log::info("Audio info shown!");
}

void DebugCheats::reset() {
    log::info("DebugCheats reset!");
}

void DebugCheats::applyAll() {
    showMemoryUsage();
    showObjectCount();
    showFrameTime();
    log::info("All DebugCheats applied!");
}
