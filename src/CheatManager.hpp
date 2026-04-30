#pragma once
#include <geode/loader/Mod.hpp>
#include <map>
#include <string>
#include <vector>

class CheatManager {
private:
    static CheatManager* instance;
    std::map<std::string, bool> cheats;
    
public:
    static CheatManager& get() {
        if (!instance) instance = new CheatManager();
        return *instance;
    }
    
    void initialize();
    
    // Cheat toggling
    bool isCheatEnabled(const std::string& cheatID);
    void toggleCheat(const std::string& cheatID);
    void enableCheat(const std::string& cheatID);
    void disableCheat(const std::string& cheatID);
    
    // Level cheats (1-15)
    void onLevelLoad();
    void cheat1_GodMode();
    void cheat2_InfiniteOrbs();
    void cheat3_SuperSpeed();
    void cheat4_SlowMotion();
    void cheat5_FreezeTime();
    void cheat6_FlipGravity();
    void cheat7_Teleport();
    void cheat8_WarpToPercent(float percent);
    void cheat9_SkipObstacles();
    void cheat10_WebhookSkip();
    void cheat11_InfiniteShips();
    void cheat12_BallMode();
    void cheat13_UFOMode();
    void cheat14_SpiderMode();
    void cheat15_RobotMode();
    
    // Player cheats (16-30)
    void onPlayerMove(GJGameLevel* level);
    void cheat16_InfiniteJump();
    void cheat17_HighJump();
    void cheat18_LowJump();
    void cheat19_FastJump();
    void cheat20_SlowJump();
    void cheat21_FlyMode();
    void cheat22_PhaseThrough();
    void cheat23_SizeChange(float size);
    void cheat24_SpeedChange(float speed);
    void cheat25_Invincibility();
    void cheat26_Unbreakable();
    void cheat27_NoDeath();
    void cheat28_AutoRestart();
    void cheat29_QuickRestart();
    void cheat30_InstantRestart();
    
    // Object cheats (31-45)
    void cheat31_DestroyAllObjects();
    void cheat32_DestroySpikes();
    void cheat33_DestroyBlocks();
    void cheat34_DestroyOrbs();
    void cheat35_DestroyPortals();
    void cheat36_DestroyShaders();
    void cheat37_DestroyParticles();
    void cheat38_DestroyTriggers();
    void cheat39_DestroyDecals();
    void cheat40_DestroyText();
    void cheat41_HideObjects();
    void cheat42_ShowHiddenObjects();
    void cheat43_SelectAllObjects();
    void cheat44_CopyAllObjects();
    void cheat45_PasteAllObjects();
    
    // Visual cheats (46-60)
    void cheat46_ShowHitboxes();
    void cheat47_ShowCollisionBoxes();
    void cheat48_ShowTriggerZones();
    void cheat49_ShowPortalDestinations();
    void cheat50_ShowObjectIDs();
    void cheat51_ShowFPS();
    void cheat52_ShowCoordinates();
    void cheat53_ShowSpeed();
    void cheat54_ShowPercent();
    void cheat55_ShowTime();
    void cheat56_ShowDistance();
    void cheat57_ShowRotation();
    void cheat58_ShowSize();
    void cheat59_CustomColors();
    void cheat60_CustomEffects();
    
    // Audio cheats (61-70)
    void cheat61_MuteMusic();
    void cheat62_MuteSFX();
    void cheat63_CustomMusic();
    void cheat64_CustomSFX();
    void cheat65_VolumeBoost();
    void cheat66_BassBoost();
    void cheat67_TrebleBoost();
    void cheat68_Equalizer();
    void cheat69_AudioSpeed();
    void cheat70_NoAudioDelay();
    
    // Shop cheats (71-80)
    void cheat71_InfiniteGems();
    void cheat72_InfiniteCredits();
    void cheat73_InfiniteStars();
    void cheat74_UnlockAllShips();
    void cheat75_UnlockAllBalls();
    void cheat76_UnlockAllColors();
    void cheat77_UnlockAllGlowColors();
    void cheat78_UnlockAllShaders();
    void cheat79_UnlockAllEffects();
    void cheat80_UnlockAllItems();
    
    // Editor cheats (81-90)
    void cheat81_UnlimitedObjects();
    void cheat82_UnlimitedPortals();
    void cheat83_UnlimitedTriggers();
    void cheat84_UnlimitedDecals();
    void cheat85_UnlimitedText();
    void cheat86_UnlimitedLayers();
    void cheat87_UnlimitedGroups();
    void cheat88_UnlimitedCameras();
    void cheat89_UnlimitedShaders();
    void cheat90_UnlimitedParticles();
    
    // Advanced cheats (91-100)
    void cheat91_CustomLevelData();
    void cheat92_CustomPlayerData();
    void cheat93_CustomUserData();
    void cheat94_CustomSettings();
    void cheat95_CustomColors();
    void cheat96_CustomEffects();
    void cheat97_CustomAnimations();
    void cheat98_CustomParticles();
    void cheat99_CustomShaders();
    void cheat100_GodMode();
    
    // Utility functions
    void saveSettings();
    void loadSettings();
    void resetSettings();
    
    // Debug functions
    void debugLog(const std::string& message);
    void debugPrint();
};
