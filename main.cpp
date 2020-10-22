#include <cstdlib>
#include <iostream>

using namespace std;

struct Point2D
{
    double x;
    double y;
};

Point2D create_point()
{
    Point2D tmp;
    tmp.x = rand() % 10;
    tmp.y = rand() % 10;

    return tmp;
}

void initialize_in_place(Point2D &point)
{
    point.x = rand() % 10;
    point.y = rand() % 10;
}

int main()
{
    Point2D mypoint = create_point();

    cout << "Value of X: " << mypoint.x << endl;
    cout << "Value of Y: " << mypoint.y << endl;

    Point2D empty_point;
    initialize_in_place(empty_point);

    cout << "Value of X: " << empty_point.x << endl;
    cout << "Value of Y: " << empty_point.y << endl;

    return 0;
}