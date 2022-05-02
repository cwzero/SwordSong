add_library(SwordSong SHARED SwordSong.cpp
    SwordSongGame.cpp)
target_include_directories(SwordSong PUBLIC "${PROJECT_SOURCE_DIR}/Include")

add_executable(SwordSong_bin Main.cpp)
set_target_properties(SwordSong_bin PROPERTIES OUTPUT_NAME SwordSong)

target_link_libraries(SwordSong_bin SwordSong)
target_link_libraries(SwordSong Phantasia)