/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E7.18

Creates triangle class with perimeter function
*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
        double x;
        double y;
};

double distance(Point a, Point b) {
        return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
};

struct Triangle {
	Point x;
	Point y;
	Point z;
};

double perimeter(Triangle t){
	return distance(t.x, t.y) + distance(t.y,t.z) + distance(t.z,t.x);
}

int main() {
	double x1, y1,x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	Triangle tri = {{x1,y1}, {x2,y2}, {x3,y3}};
	cout << perimeter(tri) << endl;
	
	return 0;
}
