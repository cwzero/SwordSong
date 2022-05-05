add_library(Phantasia STATIC
    Phantasia.cpp
    Engine.cpp
    GLSurface.cpp
    KeyEvent.cpp
    Model.cpp
    Shader.cpp
    TileGrid2D.cpp
    TileSet.cpp
    Window.cpp)
target_include_directories(Phantasia PUBLIC "${PROJECT_SOURCE_DIR}/Include")

add_subdirectory(Math)

find_package(OpenGL COMPONENTS OpenGL REQUIRED)

target_link_libraries(Phantasia PUBLIC OpenGL::GL)
target_link_libraries(Phantasia PUBLIC glad)
target_link_libraries(Phantasia PUBLIC glfw)
target_link_libraries(Phantasia PUBLIC glm)
target_link_libraries(Phantasia PUBLIC Phantasia.Math)