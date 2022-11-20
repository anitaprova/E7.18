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
	Triangle tri = {{5,5}, {4,18}, {9,22}};
	cout << perimeter(tri) << endl;
	
	return 0;
}
