#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return dx * dx + dy * dy; 
}

int main() {
    Point p1, p2;

    cout << "Enter coordinates for the first point (x): ";
    cin >> p1.x;
    cout << "Enter coordinates for the first point (y): ";
    cin >> p1.y;

    cout << "Enter coordinates for the second point (x): ";
    cin >> p2.x;
    cout << "Enter coordinates for the second point (y): ";
    cin >> p2.y;

    double dist_squared = distance(p1, p2);

    cout << "The squared distance between the points is: " << dist_squared << "\n";

    return 0;
}
