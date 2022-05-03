add_library(glad STATIC 
    egl.c
    gl.c
    vulkan.c
    wgl.c)
target_include_directories(glad PUBLIC "${PROJECT_SOURCE_DIR}/Lib/glad/include")