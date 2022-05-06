add_library(Phantasia.Math.ThreeD STATIC
	Math3D.cpp
	Rect3D.cpp
	Size3D.cpp)
target_include_directories(Phantasia.Math.ThreeD PUBLIC "${PROJECT_SOURCE_DIR}/Include")