#include "Phantasia/Grid/ThreeD/Grid3D.hpp"

using namespace Phantasia::Math::ThreeD;
using namespace Phantasia::Grid::ThreeD;

template<typename T>
Grid3D<T>::Grid3D(int width, int height, int depth) : Grid3D(0, 0, 0, width, height, depth) {

}

template<typename T>
Grid3D<T>::Grid3D(Point3D location, Size3D size) : Grid3D(location.x, location.y, location.z, size.width, size.height, size.depth) {

}

template<typename T>
Grid3D<T>::Grid3D(int x, int y, int z, int width, int height, int depth) : Rect3D(x, y, z, width, height, depth) {
    this->grid = new T***[width];
    for (int x = 0; x < width; x++) {
        this->grid[x] = new T**[height];
        for (int y = 0; y < height; y++) {
            this->grid[x][y] = new T*[depth];
            for (int z = 0; z < depth; z++) {
                this->grid[x][y][z] = nullptr;
            }
        }
    }
}

template<typename T>
T* Grid3D<T>::get(int x, int y, int z) const {
    if (contains(x, y)) {
        return this->grid[x][y][z];
    }
    return nullptr;
}

template<typename T>
T* Grid3D<T>::set(int x, int y, int z, T& t) {
    T* result = nullptr;
    if (contains(x, y)) {
        result = this->grid[x][y][z];
        this->grid[x][y][z] = &t;
    }
    return result;
}