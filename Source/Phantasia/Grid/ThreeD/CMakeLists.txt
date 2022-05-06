add_library(Phantasia.Grid.ThreeD STATIC
	Grid3D.cpp)
target_include_directories(Phantasia.Grid.ThreeD PUBLIC "${PROJECT_SOURCE_DIR}/Include")

target_link_libraries(Phantasia.Grid.ThreeD PUBLIC Phantasia.Math)