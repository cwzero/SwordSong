#pragma once

#include <cmath>

namespace Phantasia {
    typedef struct Point2D {
        int x, y;
    } Point2D;

    typedef struct Point3D {
        int x, y, z;
    } Point3D;

    typedef struct Size2D {
        int width, height;
    } Size2D;

    typedef struct Size3D {
        int width, height, depth;
    } Size3D;

    typedef struct Line2D {
        int x1, y1, x2, y2;

        Point2D GetOrigin() {
            return {x1, y1};
        }

        Point2D GetDestination() {
            return {x2, y2};
        }

        double GetLength() {
            return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        }
    } Line2D;

    typedef struct Rect2D {
        int x, y, width, height;

        Point2D GetPos() {
            return {x, y};
        }

        Size2D GetSize() {
            return {width, height};
        }

        double GetArea() {
            return width * height;
        }

        void GetCorners(Point2D corners[4]) {
            corners[0] = {x, y};
            corners[1] = {x + width, y};
            corners[2] = {x + width, y + height};
            corners[3] = {x, y + height};
        }
    } Rect2D;
}