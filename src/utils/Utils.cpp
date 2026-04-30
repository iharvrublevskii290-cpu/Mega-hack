#include "Utils.hpp"
#include <geode/loader/Log.hpp>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <ctime>

using namespace geode::prelude;

// Math utilities
float Utils::clamp(float value, float min, float max) {
    return std::max(min, std::min(max, value));
}

float Utils::lerp(float a, float b, float t) {
    return a + (b - a) * t;
}

float Utils::random(float min, float max) {
    return min + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max - min)));
}

// String utilities
std::string Utils::trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    if (first == std::string::npos) return "";
    size_t last = str.find_last_not_of(" \t\n\r");
    return str.substr(first, last - first + 1);
}

std::vector<std::string> Utils::split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Color utilities
cocos2d::ccColor3B Utils::hexToColor(const std::string& hex) {
    unsigned int color;
    std::stringstream ss;
    ss << std::hex << hex.substr(1);
    ss >> color;
    
    return cocos2d::ccColor3B(
        (color >> 16) & 0xFF,
        (color >> 8) & 0xFF,
        color & 0xFF
    );
}

std::string Utils::colorToHex(cocos2d::ccColor3B color) {
    std::stringstream ss;
    ss << std::hex << "#"
       << std::setw(2) << std::setfill('0') << (int)color.r
       << std::setw(2) << std::setfill('0') << (int)color.g
       << std::setw(2) << std::setfill('0') << (int)color.b;
    return ss.str();
}

// Position utilities
cocos2d::CCPoint Utils::screenToWorld(cocos2d::CCPoint screenPos) {
    auto camera = CCDirector::sharedDirector()->getRunningScene()->getCamera();
    auto winSize = CCDirector::sharedDirector()->getVisibleSize();
    
    return CCPoint(
        (screenPos.x - winSize.width / 2) / camera->getScale(),
        (screenPos.y - winSize.height / 2) / camera->getScale()
    );
}

cocos2d::CCPoint Utils::worldToScreen(cocos2d::CCPoint worldPos) {
    auto camera = CCDirector::sharedDirector()->getRunningScene()->getCamera();
    auto winSize = CCDirector::sharedDirector()->getVisibleSize();
    
    return CCPoint(
        worldPos.x * camera->getScale() + winSize.width / 2,
        worldPos.y * camera->getScale() + winSize.height / 2
    );
}

// Time utilities
float Utils::getTime() {
    return static_cast<float>(std::time(nullptr));
}

float Utils::getDelta() {
    return CCDirector::sharedDirector()->getDeltaTime();
}

int Utils::getTimestamp() {
    return static_cast<int>(std::time(nullptr));
}

// File utilities
bool Utils::fileExists(const std::string& path) {
    std::ifstream file(path);
    return file.good();
}

std::string Utils::readFile(const std::string& path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        return "";
    }
    
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

bool Utils::writeFile(const std::string& path, const std::string& content) {
    std::ofstream file(path);
    if (!file.is_open()) {
        return false;
    }
    
    file << content;
    file.close();
    return true;
}

// Debug utilities
void Utils::debugLog(const std::string& message) {
    log::info("[Utils] " + message);
}

void Utils::debugAssert(bool condition, const std::string& message) {
    if (!condition) {
        log::error("[Utils ASSERT] " + message);
    }
}
