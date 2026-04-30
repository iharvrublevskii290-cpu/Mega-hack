cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(UltimateCheatMod VERSION 1.0.0)

# Geode SDK setup
find_package(geode REQUIRED CONFIG)

# Source files
set(SOURCES
    src/main.cpp
    src/CheatManager.cpp
    src/cheats/LevelCheats.cpp
    src/cheats/PlayerCheats.cpp
    src/cheats/ObjectCheats.cpp
    src/cheats/VisualCheats.cpp
    src/cheats/AudioCheats.cpp
    src/cheats/DebugCheats.cpp
    src/cheats/ShopCheats.cpp
    src/cheats/EditorCheats.cpp
    src/cheats/MenuCheats.cpp
    src/cheats/AdvancedCheats.cpp
    src/ui/CheatMenu.cpp
    src/utils/Utils.cpp
)

# Create the mod library
geode::create_mod_library(ultimatecheatmod ${SOURCES})

# Link Geode
target_link_libraries(ultimatecheatmod PRIVATE geode)

# Compile definitions
target_compile_definitions(ultimatecheatmod PRIVATE
    GEODE_MOD_EXPORT
    MOD_ID=com.ultimate.cheatmod
)

# Include directories
target_include_directories(ultimatecheatmod PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Install
install(TARGETS ultimatecheatmod
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/mods
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/mods
)
