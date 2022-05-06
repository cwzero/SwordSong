#include "Phantasia/Grid/TwoD/Grid2D.hpp"

using namespace Phantasia::Math::TwoD;
using namespace Phantasia::Grid::TwoD;

template<typename T>
Grid2D<T>::Grid2D(int width, int height) : Grid2D(0, 0, width, height) {

}

template<typename T>
Grid2D<T>::Grid2D(Point2D location, Size2D size) : Grid2D(location.x, location.y, size.width, size.height) {

}

template<typename T>
Grid2D<T>::Grid2D(int x, int y, int width, int height) : Rect2D(x, y, width, height) {
    this->grid = new T**[width];
    for (int x = 0; x < width; x++) {
        this->grid[x] = new T*[height];
        for (int y = 0; y < height; y++) {
            this->grid[x][y] = nullptr;
        }
    }
}

template<typename T>
T* Grid2D<T>::get(int x, int y) const {
    if (contains(x, y)) {
        return this->grid[x][y];
    }
    return nullptr;
}

template<typename T>
T* Grid2D<T>::set(int x, int y, T& t) {
    T* result = nullptr;
    if (contains(x, y)) {
        result = this->grid[x][y];
        this->grid[x][y] = &t;
    }
    return result;
}