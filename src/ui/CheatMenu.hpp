#pragma once
#include <geode/ui/Popup.hpp>
#include <geode/ui/Modal.hpp>
#include <geode/ui/TabbedLayer.hpp>
#include <vector>
#include <string>

using namespace geode::prelude;

class CheatMenu : public TabbedLayer {
private:
    std::vector<CCLayerColor*> categoryLayers;
    
public:
    CREATE_FUNC(CheatMenu);
    
    bool init() override;
    
    // Category tabs
    void createLevelCheatsTab();
    void createPlayerCheatsTab();
    void createObjectCheatsTab();
    void createVisualCheatsTab();
    void createAudioCheatsTab();
    void createShopCheatsTab();
    void createEditorCheatsTab();
    void createAdvancedCheatsTab();
    
    // Cheat buttons
    void createCheatButton(CCLayerColor* layer, const std::string& id, const std::string& name, int row, int col);
    void onCheatToggle(CCObject* sender);
    
    // Settings
    void createSettingsTab();
    void onSave(CCObject* sender);
    void onLoad(CCObject* sender);
    void onReset(CCObject* sender);
    void onDebug(CCObject* sender);
    
    // Close
    void onClose(CCObject* sender);
};
