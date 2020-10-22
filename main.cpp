#include <array>
#include <iostream>

// Define a struct ---> NEW TYPE
struct Point2D
{
    double x;
    double y;
};

int main()
{
    // Declare a variable with our struct
    Point2D mypoint;

    // Initialize its members
    mypoint.x = 3.3;
    mypoint.y = 5.5;

    // Print its contents
    std::cout << "Value of X: " << mypoint.x << std::endl;
    std::cout << "Value of Y: " << mypoint.y << std::endl;

    return 0;
}