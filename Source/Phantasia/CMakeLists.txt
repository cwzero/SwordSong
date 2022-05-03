add_library(Phantasia STATIC Phantasia.cpp
    Game.cpp
    Window.cpp)
target_include_directories(Phantasia PUBLIC "${PROJECT_SOURCE_DIR}/Include")

find_package(OpenGL COMPONENTS OpenGL REQUIRED)

target_link_libraries(Phantasia PUBLIC OpenGL::GL)
target_link_libraries(Phantasia PUBLIC glad)
target_link_libraries(Phantasia PUBLIC glfw)
target_link_libraries(Phantasia PUBLIC glm)