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
        double cx, cy, x, y, radius;
        std::cout << "Enter the circle center and the point coordinates and the radius as following: xCircle yCircle x2 y2 R [ENTER]\n";
        std::cin >> cx >> cy >> x >> y >> radius;
        testPoint = geometry::circleContains( cx, cy, radius, x, y);
    }
    else if( shape == "square" )
    {
        double ULx, ULy, x, y, length;
        std::cout << "Enter the UpLift point and the point coordinates and the length as following: ULx ULy x2 y2 L [ENTER]\n";
        std::cin >> ULx >> ULy >> x >> y >> length;
        testPoint = geometry::squareContains( ULx, ULy, length, x, y);
    }
    else if( shape == "rectangle" )
    {
           double ULx, ULy, DRx, DRy, x, y;
        std::cout << "Enter the UpLift point and DownRight point and the point coordinates as following: ULx ULy DRx DRy x2 y2 [ENTER]\n";
        std::cin >> ULx >> ULy >> DRx >> DRy >> x >> y;
        testPoint = geometry::rectangleContains( ULx, ULy, DRx, DRy, x, y);
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