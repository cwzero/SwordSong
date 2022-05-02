add_library(Phantasia SHARED Phantasia.cpp
    Game.cpp)
target_include_directories(Phantasia PUBLIC "${PROJECT_SOURCE_DIR}/Include")
