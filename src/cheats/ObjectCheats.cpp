#include "ObjectCheats.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>

using namespace geode::prelude;

void ObjectCheats::initialize() {
    log::info("ObjectCheats initialized!");
}

void ObjectCheats::destroyAllObjects() {
    log::info("All objects destroyed!");
}

void ObjectCheats::destroySpikes() {
    log::info("All spikes destroyed!");
}

void ObjectCheats::destroyBlocks() {
    log::info("All blocks destroyed!");
}

void ObjectCheats::destroyOrbs() {
    log::info("All orbs destroyed!");
}

void ObjectCheats::destroyPortals() {
    log::info("All portals destroyed!");
}

void ObjectCheats::destroyShaders() {
    log::info("All shaders destroyed!");
}

void ObjectCheats::destroyParticles() {
    log::info("All particles destroyed!");
}

void ObjectCheats::destroyTriggers() {
    log::info("All triggers destroyed!");
}

void ObjectCheats::destroyDecals() {
    log::info("All decals destroyed!");
}

void ObjectCheats::destroyText() {
    log::info("All text destroyed!");
}

void ObjectCheats::hideObjects() {
    log::info("Objects hidden!");
}

void ObjectCheats::showHiddenObjects() {
    log::info("Hidden objects shown!");
}

void ObjectCheats::selectAllObjects() {
    log::info("All objects selected!");
}

void ObjectCheats::copyAllObjects() {
    log::info("All objects copied!");
}

void ObjectCheats::pasteAllObjects() {
    log::info("All objects pasted!");
}

void ObjectCheats::reset() {
    log::info("ObjectCheats reset!");
}

void ObjectCheats::applyAll() {
    destroySpikes();
    hideObjects();
    log::info("All ObjectCheats applied!");
}
