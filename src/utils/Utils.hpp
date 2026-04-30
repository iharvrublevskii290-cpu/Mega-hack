#pragma once
#include <string>
#include <vector>
#include <cmath>

namespace Utils {
    // Math utilities
    float clamp(float value, float min, float max);
    float lerp(float a, float b, float t);
    float random(float min, float max);
    
    // String utilities
    std::string format(const char* format, ...);
    std::string trim(const std::string& str);
    std::vector<std::string> split(const std::string& str, char delimiter);
    
    // Color utilities
    cocos2d::ccColor3B hexToColor(const std::string& hex);
    std::string colorToHex(cocos2d::ccColor3B color);
    
    // Position utilities
    cocos2d::CCPoint screenToWorld(cocos2d::CCPoint screenPos);
    cocos2d::CCPoint worldToScreen(cocos2d::CCPoint worldPos);
    
    // Time utilities
    float getTime();
    float getDelta();
    int getTimestamp();
    
    // File utilities
    bool fileExists(const std::string& path);
    std::string readFile(const std::string& path);
    bool writeFile(const std::string& path, const std::string& content);
    
    // Debug utilities
    void debugLog(const std::string& message);
    void debugAssert(bool condition, const std::string& message);
}
