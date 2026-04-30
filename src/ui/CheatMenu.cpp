#include "CheatMenu.hpp"
#include "../CheatManager.hpp"
#include <geode/loader/Log.hpp>
#include <geode/ui/Popup.hpp>

using namespace geode::prelude;

bool CheatMenu::init() {
    if (!TabbedLayer::init()) return false;
    
    setScale(0.8f);
    auto size = CCDirector::sharedDirector()->getVisibleSize();
    auto origin = CCDirector::sharedDirector()->getVisibleOrigin();
    
    this->setContentSize(CCSize(size.width * 0.8f, size.height * 0.8f));
    this->setPosition(CCPoint(origin.x + size.width * 0.1f, origin.y + size.height * 0.1f));
    
    // Create tabs
    auto tabs = std::vector<std::string>{
        "Level Cheats",
        "Player Cheats",
        "Object Cheats",
        "Visual Cheats",
        "Audio Cheats",
        "Shop Cheats",
        "Editor Cheats",
        "Advanced Cheats",
        "Settings"
    };
    
    for (const auto& tabName : tabs) {
        this->addTab(tabName, nullptr);
    }
    
    // Create content for each tab
    createLevelCheatsTab();
    createPlayerCheatsTab();
    createObjectCheatsTab();
    createVisualCheatsTab();
    createAudioCheatsTab();
    createShopCheatsTab();
    createEditorCheatsTab();
    createAdvancedCheatsTab();
    createSettingsTab();
    
    log::info("CheatMenu created successfully!");
    return true;
}

void CheatMenu::createLevelCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"god_mode", "God Mode", 1, 1},
        {"infinite_orbs", "Infinite Orbs", 1, 2},
        {"super_speed", "Super Speed", 2, 1},
        {"slow_motion", "Slow Motion", 2, 2},
        {"freeze_time", "Freeze Time", 3, 1},
        {"flip_gravity", "Flip Gravity", 3, 2},
        {"teleport", "Teleport", 4, 1},
        {"warp_percent", "Warp to %", 4, 2},
        {"skip_obstacles", "Skip Obstacles", 5, 1},
        {"webhook_skip", "Webhook Skip", 5, 2},
        {"infinite_ships", "Infinite Ships", 6, 1},
        {"ball_mode", "Ball Mode", 6, 2},
        {"ufo_mode", "UFO Mode", 7, 1},
        {"spider_mode", "Spider Mode", 7, 2},
        {"robot_mode", "Robot Mode", 8, 1},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createPlayerCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"infinite_jump", "Infinite Jump", 1, 1},
        {"high_jump", "High Jump", 1, 2},
        {"low_jump", "Low Jump", 2, 1},
        {"fast_jump", "Fast Jump", 2, 2},
        {"slow_jump", "Slow Jump", 3, 1},
        {"fly_mode", "Fly Mode", 3, 2},
        {"phase_through", "Phase Through", 4, 1},
        {"size_change", "Size Change", 4, 2},
        {"speed_change", "Speed Change", 5, 1},
        {"invincibility", "Invincibility", 5, 2},
        {"unbreakable", "Unbreakable", 6, 1},
        {"no_death", "No Death", 6, 2},
        {"auto_restart", "Auto Restart", 7, 1},
        {"quick_restart", "Quick Restart", 7, 2},
        {"instant_restart", "Instant Restart", 8, 1},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createObjectCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"destroy_all", "Destroy All", 1, 1},
        {"destroy_spikes", "Destroy Spikes", 1, 2},
        {"destroy_blocks", "Destroy Blocks", 2, 1},
        {"destroy_orbs", "Destroy Orbs", 2, 2},
        {"destroy_portals", "Destroy Portals", 3, 1},
        {"destroy_shaders", "Destroy Shaders", 3, 2},
        {"destroy_particles", "Destroy Particles", 4, 1},
        {"destroy_triggers", "Destroy Triggers", 4, 2},
        {"destroy_decals", "Destroy Decals", 5, 1},
        {"destroy_text", "Destroy Text", 5, 2},
        {"hide_objects", "Hide Objects", 6, 1},
        {"show_hidden", "Show Hidden", 6, 2},
        {"select_all", "Select All", 7, 1},
        {"copy_all", "Copy All", 7, 2},
        {"paste_all", "Paste All", 8, 1},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createVisualCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"show_hitboxes", "Show Hitboxes", 1, 1},
        {"show_collision", "Show Collision", 1, 2},
        {"show_triggers", "Show Triggers", 2, 1},
        {"show_portals", "Show Portals", 2, 2},
        {"show_ids", "Show IDs", 3, 1},
        {"show_fps", "Show FPS", 3, 2},
        {"show_coords", "Show Coords", 4, 1},
        {"show_speed", "Show Speed", 4, 2},
        {"show_percent", "Show %", 5, 1},
        {"show_time", "Show Time", 5, 2},
        {"show_distance", "Show Distance", 6, 1},
        {"show_rotation", "Show Rotation", 6, 2},
        {"show_size", "Show Size", 7, 1},
        {"custom_colors", "Custom Colors", 7, 2},
        {"custom_effects", "Custom Effects", 8, 1},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createAudioCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"mute_music", "Mute Music", 1, 1},
        {"mute_sfx", "Mute SFX", 1, 2},
        {"custom_music", "Custom Music", 2, 1},
        {"custom_sfx", "Custom SFX", 2, 2},
        {"volume_boost", "Volume Boost", 3, 1},
        {"bass_boost", "Bass Boost", 3, 2},
        {"treble_boost", "Treble Boost", 4, 1},
        {"equalizer", "Equalizer", 4, 2},
        {"audio_speed", "Audio Speed", 5, 1},
        {"no_audio_delay", "No Audio Delay", 5, 2},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createShopCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"infinite_gems", "Infinite Gems", 1, 1},
        {"infinite_credits", "Infinite Credits", 1, 2},
        {"infinite_stars", "Infinite Stars", 2, 1},
        {"unlock_ships", "Unlock Ships", 2, 2},
        {"unlock_balls", "Unlock Balls", 3, 1},
        {"unlock_colors", "Unlock Colors", 3, 2},
        {"unlock_glow", "Unlock Glow", 4, 1},
        {"unlock_shaders", "Unlock Shaders", 4, 2},
        {"unlock_effects", "Unlock Effects", 5, 1},
        {"unlock_all", "Unlock ALL", 5, 2},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createEditorCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"unlimited_objects", "Unlimited Objects", 1, 1},
        {"unlimited_portals", "Unlimited Portals", 1, 2},
        {"unlimited_triggers", "Unlimited Triggers", 2, 1},
        {"unlimited_decals", "Unlimited Decals", 2, 2},
        {"unlimited_text", "Unlimited Text", 3, 1},
        {"unlimited_layers", "Unlimited Layers", 3, 2},
        {"unlimited_groups", "Unlimited Groups", 4, 1},
        {"unlimited_cameras", "Unlimited Cameras", 4, 2},
        {"unlimited_shaders", "Unlimited Shaders", 5, 1},
        {"unlimited_particles", "Unlimited Particles", 5, 2},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createAdvancedCheatsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    auto cheats = {
        {"custom_level", "Custom Level Data", 1, 1},
        {"custom_player", "Custom Player Data", 1, 2},
        {"custom_user", "Custom User Data", 2, 1},
        {"custom_settings", "Custom Settings", 2, 2},
        {"custom_colors_adv", "Custom Colors+", 3, 1},
        {"custom_effects_adv", "Custom Effects+", 3, 2},
        {"custom_animations", "Custom Animations", 4, 1},
        {"custom_particles_adv", "Custom Particles+", 4, 2},
        {"custom_shaders_adv", "Custom Shaders+", 5, 1},
        {"god_mode_adv", "God Mode+", 5, 2},
    };
    
    for (const auto& [id, name, row, col] : cheats) {
        createCheatButton(layer, id, name, row, col);
    }
}

void CheatMenu::createSettingsTab() {
    auto layer = CCLayerColor::create(ccc4(50, 50, 70, 255), this->getContentSize().width, this->getContentSize().height);
    layer->setPosition(CCPointZero);
    this->addChild(layer);
    
    // Save button
    auto saveBtn = GUILayerColor::create(ccc4(100, 150, 100, 255), 200, 60);
    saveBtn->setPosition(CCPoint(this->getContentSize().width / 2, this->getContentSize().height - 100));
    auto saveLabel = Label::create("SAVE", "fonts/Roboto-Bold.ttf", 24);
    saveLabel->setPosition(CCPoint(100, 30));
    saveBtn->addChild(saveLabel);
    saveBtn->setTouchEnabled(true);
    saveBtn->setTag(1001);
    auto saveListener = cocos2d::touchEventListener();
    saveListener->onTouchBegan = [this](auto, auto) { return true; };
    saveListener->onTouchEnded = [this](auto, auto) { this->onSave(nullptr); return true; };
    _eventDispatcher->addEventListenerWithSceneGraphPriority(saveListener, saveBtn);
    layer->addChild(saveBtn);
    
    // Load button
    auto loadBtn = GUILayerColor::create(ccc4(100, 150, 100, 255), 200, 60);
    loadBtn->setPosition(CCPoint(this->getContentSize().width / 2, this->getContentSize().height - 180));
    auto loadLabel = Label::create("LOAD", "fonts/Roboto-Bold.ttf", 24);
    loadLabel->setPosition(CCPoint(100, 30));
    loadBtn->addChild(loadLabel);
    layer->addChild(loadBtn);
    
    // Reset button
    auto resetBtn = GUILayerColor::create(ccc4(150, 100, 100, 255), 200, 60);
    resetBtn->setPosition(CCPoint(this->getContentSize().width / 2, this->getContentSize().height - 260));
    auto resetLabel = Label::create("RESET", "fonts/Roboto-Bold.ttf", 24);
    resetLabel->setPosition(CCPoint(100, 30));
    resetBtn->addChild(resetLabel);
    layer->addChild(resetBtn);
    
    // Debug button
    auto debugBtn = GUILayerColor::create(ccc4(150, 150, 100, 255), 200, 60);
    debugBtn->setPosition(CCPoint(this->getContentSize().width / 2, this->getContentSize().height - 340));
    auto debugLabel = Label::create("DEBUG", "fonts/Roboto-Bold.ttf", 24);
    debugLabel->setPosition(CCPoint(100, 30));
    debugBtn->addChild(debugLabel);
    layer->addChild(debugBtn);
    
    // Close button
    auto closeBtn = GUILayerColor::create(ccc4(150, 100, 100, 255), 200, 60);
    closeBtn->setPosition(CCPoint(this->getContentSize().width / 2, 80));
    auto closeLabel = Label::create("CLOSE", "fonts/Roboto-Bold.ttf", 24);
    closeLabel->setPosition(CCPoint(100, 30));
    closeBtn->addChild(closeLabel);
    closeBtn->setTag(1002);
    auto closeListener = cocos2d::touchEventListener();
    closeListener->onTouchBegan = [this](auto, auto) { return true; };
    closeListener->onTouchEnded = [this](auto, auto) { this->onClose(nullptr); return true; };
    _eventDispatcher->addEventListenerWithSceneGraphPriority(closeListener, closeBtn);
    layer->addChild(closeBtn);
    
    // Title
    auto title = Label::create("ULTIMATE CHEAT MOD", "fonts/Roboto-Bold.ttf", 36);
    title->setPosition(CCPoint(this->getContentSize().width / 2, this->getContentSize().height - 50));
    title->setColor(ccc3(255, 255, 255));
    layer->addChild(title);
    
    // Version
    auto version = Label::create("v1.0.0 - 100+ Cheats", "fonts/Roboto-Regular.ttf", 18);
    version->setPosition(CCPoint(this->getContentSize().width / 2, this->getContentSize().height - 90));
    version->setColor(ccc3(200, 200, 200));
    layer->addChild(version);
}

void CheatMenu::createCheatButton(CCLayerColor* layer, const std::string& id, const std::string& name, int row, int col) {
    float btnWidth = this->getContentSize().width / 2.5f;
    float btnHeight = 50;
    float x = (col - 1) * (btnWidth + 10) + 10;
    float y = this->getContentSize().height - (row * (btnHeight + 10)) - 20;
    
    auto btn = GUILayerColor::create(ccc4(80, 80, 120, 255), btnWidth, btnHeight);
    btn->setPosition(CCPoint(x + btnWidth / 2, y + btnHeight / 2));
    
    auto label = Label::create(name, "fonts/Roboto-Regular.ttf", 16);
    label->setPosition(CCPoint(btnWidth / 2, btnHeight / 2));
    btn->addChild(label);
    
    btn->setTag(id.c_str());
    btn->setUserData((void*)id.c_str());
    
    auto listener = cocos2d::touchEventListener();
    listener->onTouchBegan = [this, id](auto, auto) {
        CheatManager::get().toggleCheat(id);
        return true;
    };
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, btn);
    
    layer->addChild(btn);
}

void CheatMenu::onCheatToggle(CCObject* sender) {
    auto btn = static_cast<cocos2d::CCNode*>(sender);
    auto id = static_cast<const char*>(btn->getUserData());
    if (id) {
        CheatManager::get().toggleCheat(id);
    }
}

void CheatMenu::onSave(CCObject* sender) {
    CheatManager::get().saveSettings();
    auto popup = Popup::create("Settings", "Settings saved successfully!", "OK");
    popup->show();
}

void CheatMenu::onLoad(CCObject* sender) {
    CheatManager::get().loadSettings();
    auto popup = Popup::create("Settings", "Settings loaded successfully!", "OK");
    popup->show();
}

void CheatMenu::onReset(CCObject* sender) {
    CheatManager::get().resetSettings();
    auto popup = Popup::create("Settings", "Settings reset to default!", "OK");
    popup->show();
}

void CheatMenu::onDebug(CCObject* sender) {
    CheatManager::get().debugPrint();
    auto popup = Popup::create("Debug", "Check console for debug info!", "OK");
    popup->show();
}

void CheatMenu::onClose(CCObject* sender) {
    this->removeFromParentAndCleanup(true);
}
