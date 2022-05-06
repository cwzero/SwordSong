add_library(Phantasia.Math.TwoD STATIC
	Math2D.cpp
	Rect2D.cpp
	Size2D.cpp)
target_include_directories(Phantasia.Math.TwoD PUBLIC "${PROJECT_SOURCE_DIR}/Include")