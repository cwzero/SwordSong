add_library(Phantasia.Math STATIC 
    Math.cpp
    Rect2D.cpp)
target_include_directories(Phantasia.Math PUBLIC "${PROJECT_SOURCE_DIR}/Include")
target_link_libraries(Phantasia.Math PUBLIC glm)