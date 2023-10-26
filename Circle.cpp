#include <cmath>
#include <iomanip>
#include "Circle.h"

using namespace std;

double Circle :: area () const {

	return (M_PI * pow (radius,2));

}

double Circle :: perimeter () const {

	return (2 * M_PI * radius);

}

void Circle :: translate (double incX, double incY) {

	center.x += incX;
	center.y += incY;

}

void Circle :: print () {
	cout << color;
	cout << center.x << " " << center.y << endl;
	cout << radius << endl;
}

Circle :: Circle () { center.x == 0; center.y == 0; radius == 1;}

Circle :: Circle (string color, Point2D center, double radius) {

	set_color (color);
	this -> center = center;
	this -> radius = radius;

}

Point2D Circle :: get_center () const {

	return center;

}

void Circle :: set_center (Point2D p) {

	center = p;

}

double Circle :: get_radius () const {

	return radius;

}

void Circle :: set_radius (double r) {

	radius = r;

}

ostream& operator << (ostream &out, const Circle &c) {

	out << "[Circle: color = " << c.color << "; center = (" 
		<< c.center.x << ", " << c.center.y << ") radius = " 
		<< c.radius << "]" << endl;

	return out;

}

