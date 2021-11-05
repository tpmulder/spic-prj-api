#ifndef POINT_H_
#define POINT_H_

namespace spic {

    /**
     * @brief Struct representing both a 2D point and a 2D vector.
     * @spicapi
     */
    struct Point {
        double x;
        double y;

        Point operator+=(const Point& other) const;
        Point operator-=(const Point& other) const;
    };

}

#endif // POINT_H_
