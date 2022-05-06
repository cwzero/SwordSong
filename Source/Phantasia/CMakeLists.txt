add_library(Phantasia STATIC
    Phantasia.cpp
    Engine.cpp
    GameContext.cpp
    KeyEvent.cpp)
target_include_directories(Phantasia PUBLIC "${PROJECT_SOURCE_DIR}/Include")

add_subdirectory(Grid)
add_subdirectory(Math)
add_subdirectory(Render)

find_package(OpenGL COMPONENTS OpenGL REQUIRED)

target_link_libraries(Phantasia PUBLIC OpenGL::GL)
target_link_libraries(Phantasia PUBLIC glad)
target_link_libraries(Phantasia PUBLIC glfw)
target_link_libraries(Phantasia PUBLIC glm)

target_link_libraries(Phantasia PUBLIC Phantasia.Grid)
target_link_libraries(Phantasia PUBLIC Phantasia.Math)
target_link_libraries(Phantasia PUBLIC Phantasia.Render)