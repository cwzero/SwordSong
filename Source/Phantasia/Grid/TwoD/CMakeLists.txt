add_library(Phantasia.Grid.TwoD STATIC
	Grid2D.cpp)
target_include_directories(Phantasia.Grid.TwoD PUBLIC "${PROJECT_SOURCE_DIR}/Include")

target_link_libraries(Phantasia.Grid.TwoD PUBLIC Phantasia.Math)