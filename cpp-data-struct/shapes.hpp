#ifndef SHAPES_HPP
#define SHAPES_HPP

#include <cmath>

namespace geometry
{
struct Point
{
    double x;
    double y;
};
struct Circle
{
    Point center;
    double radius;
};

struct Square
{
    Point upLeftCorner;
    double length;
};

struct Rectangle
{
    Point upLeftCorner;
    Point downRightCorner;
};
double squareArea(double side)
{
    return side * side;
}

double rectangleArea(double width, double height)
{
    return width * height;
}

double triangleArea(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

double circleArea(double radius)
{
    return radius * radius * M_PI;
}

bool circleContains(double centerX, double centerY, double radius, double testX, double testY)
{
    double dx = centerX - testX;
    double dy = centerY - testY;
    return dx * dx + dy * dy <= radius * radius;
}

bool squareContains(double upleftX, double upleftY, double length, double testX, double testY)
{
    return testX >= upleftX &&
           testX <= upleftX + length &&
           testY >= upleftY &&
           testY <= upleftY + length;
}

bool rectangleContains(double upleftX, double upleftY, double downRightX, double downRightY,
                       double testX, double testY)
{
    return testX >= upleftX &&
           testX <= downRightX &&
           testY >= upleftY &&
           testY <= downRightY;
}
bool circleContains(Circle c, Point test)
{
    double dx = c.center.x - test.x;
    double dy = c.center.y - test.y;
    return dx*dx + dy*dy <= c.radius * c.radius;
}

bool squareContains(Square s, Point test)
{
    return test.x >= s.upLeftCorner.x &&
    test.x <= s.upLeftCorner.x + s.length &&
    test.y >= s.upLeftCorner.y &&
    test.y <= s.upLeftCorner.y + s.length;
}

bool rectangleContains(Rectangle r, Point test)
{
    return test.x >= r.upLeftCorner.x &&
    test.x <= r.downRightCorner.y  &&
    test.y >= r.upLeftCorner.y &&
    test.y <= r.downRightCorner.y;
}
} // namespace geometry

#endif