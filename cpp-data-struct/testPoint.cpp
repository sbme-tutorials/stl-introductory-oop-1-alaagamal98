#include <iostream>
#include <string> // for std::string
#include "shapes.hpp"

int main( int argc, char **argv )
{
    std::string shape = argv[1]; // this will copy the contents pointed by `argv[1]`
    double testPoint = 0;
    std::string available;
    if( shape == "circle" )
    {
        geometry::Point p{0,0};
        geometry::Circle c{0,0,0};
        std::cout << "Enter the circle center and the point coordinates and the radius as following: xCircle yCircle x2 y2 R [ENTER]\n";
        std::cin >> c.center.x >> c.center.y >> p.x >> p.y >> c.radius;
        testPoint = geometry::circleContains( c, p);
    }
    else if( shape == "square" )
    {
        geometry::Point p{0,0};
        geometry::Square s{0,0,0};
        std::cout << "Enter the UpLift point and the point coordinates and the length as following: ULx ULy x2 y2 L [ENTER]\n";
        std::cin >> s.upLeftCorner.x >> s.upLeftCorner.y >> p.x >> p.y >> s.length;
        testPoint = geometry::squareContains( s, p);
    }
    else if( shape == "rectangle" )
    {
           geometry::Point p{0,0};
           geometry::Rectangle r{0,0,0,0};
        std::cout << "Enter the UpLift point and DownRight point and the point coordinates as following: ULx ULy DRx DRy x2 y2 [ENTER]\n";
        std::cin >> r.upLeftCorner.x >> r.upLeftCorner.y >> r.downRightCorner.x >> r.downRightCorner.y >> p.x >> p.y;
        testPoint = geometry::rectangleContains( r , p);
    }
    else
    {
        std::cout << "Undefined shape! " << shape << "\n";
        exit( EXIT_FAILURE );
    }
    if (testPoint)
    {
        available = "True";
    }
    else
    {
        available = "False";
    }
    std::cout << "The point is available: " << available << std::endl;

    return 0;
}