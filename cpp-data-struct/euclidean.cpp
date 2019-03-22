#include <iostream>
#include <cmath>
#include "shapes.hpp"

double euclideanDistance( geometry::Point p1, geometry::Point p2 )
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return std::sqrt( dx * dx + dy * dy );
}

int main()
{
    geometry::Point p1 {0,0};
    geometry::Point p2 {0,0};
    

    std::cout << "Enter the two points coordinates as following: x1 y1 x2 y2 [ENTER]\n";
    std::cin >> p1.x >> p1.y >> p2.x >> p2.y;
    std::cout << euclideanDistance( p1, p2);
}
