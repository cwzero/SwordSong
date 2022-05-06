add_library(Phantasia.World STATIC 
    World.cpp)
target_include_directories(Phantasia.World PUBLIC "${PROJECT_SOURCE_DIR}/Include")

target_link_libraries(Phantasia.World Phantasia.Grid.ThreeD)