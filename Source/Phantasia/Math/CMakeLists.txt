add_library(Phantasia.Math STATIC 
    Math.cpp)
target_include_directories(Phantasia.Math PUBLIC "${PROJECT_SOURCE_DIR}/Include")

add_subdirectory(TwoD)
add_subdirectory(ThreeD)

target_link_libraries(Phantasia.Math PUBLIC glm)
target_link_libraries(Phantasia.Math PUBLIC Phantasia.Math.TwoD)
target_link_libraries(Phantasia.Math PUBLIC Phantasia.Math.ThreeD)