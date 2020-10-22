

#include <cstdlib>
#include <iostream>
#include <array>
#include <cmath>

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

float distance(Point2D left, Point2D right)
{
    float res_x = pow((right.x - left.x), 2);
    float res_y = pow((right.y - left.y), 2);

    return sqrt(res_x + res_y);
}

int main()
{
    array<Point2D, 10> points;

    for (int i = 0; i < 10; i++)
    {
        points[i] = create_point();
        cout << "point[" << i << "] = (" << points[i].x << ", " << points[i].y << ")" << endl;
    }

    float largest_distance = 0.0;
    Point2D first, second;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            float d = distance(points[i], points[j]);
            if (d >= largest_distance)
            {
                largest_distance = d;
                first = points[i];
                second = points[j];
            }
        }
    }

    cout << "The largest distance is: " << largest_distance << endl;
    cout << "First point: (" << first.x << ", " << first.y << ")" << endl;
    cout << "Second point: (" << second.x << ", " << second.y << ")" << endl;

    return 0;
}