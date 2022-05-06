add_library(Phantasia.Render STATIC
    GLSurface.cpp
    Model.cpp
    Shader.cpp
    BasicSurface2D.cpp
    TileSet.cpp
    Window.cpp)
target_include_directories(Phantasia.Render PUBLIC "${PROJECT_SOURCE_DIR}/Include")

find_package(OpenGL COMPONENTS OpenGL REQUIRED)

target_link_libraries(Phantasia.Render PUBLIC OpenGL::GL)
target_link_libraries(Phantasia.Render PUBLIC glad)
target_link_libraries(Phantasia.Render PUBLIC glfw)
target_link_libraries(Phantasia.Render PUBLIC glm)