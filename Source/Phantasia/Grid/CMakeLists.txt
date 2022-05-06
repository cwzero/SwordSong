add_library(Phantasia.Grid STATIC 
    Grid.cpp)
target_include_directories(Phantasia.Grid PUBLIC "${PROJECT_SOURCE_DIR}/Include")

add_subdirectory(TwoD)
add_subdirectory(ThreeD)

target_link_libraries(Phantasia.Grid PUBLIC Phantasia.Grid.TwoD)
target_link_libraries(Phantasia.Grid PUBLIC Phantasia.Grid.ThreeD)