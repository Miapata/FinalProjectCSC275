
#include <iostream>
#include <iomanip>
#include <string>
#include "shapes.h"
using namespace std;

Shape::Shape() {}
Shape::Shape(string sName, string sColor) {
	name = sName;
	color = sColor;
}

string Shape::getName() { return name; }
void Shape::setName(string sName) { name = sName; }

string Shape::getColor() { return color; }
void Shape::setColor(string sColor) { color = sColor; }

void Shape::display() {
	cout << "Shape: " << name << " with " << color << " color." << endl;
}

Rectangle::Rectangle() {}
Rectangle::Rectangle(string rName, string rColor, int rWidth, int rHeight)
	: Shape::Shape(rName, rColor)
{
	width = rWidth;
	height = rHeight;
}
int Rectangle::getWidth() { return width; }
void Rectangle::setWidth(int W) { width = W; }
int Rectangle::getHeight() { return height; }
void Rectangle::setHeight(int H) { height = H; }
void Rectangle::display() {
	cout << "Rectangle: " << name << " with " << color << " color, "
		<< "and width = " << width << ", height = " << height << endl;
}

Circle::Circle() {}
Circle::Circle(string cName, string cColor, int cRadius)
	: Shape::Shape(cName, cColor) {
	radius = cRadius;
}
int Circle::getRadius() { return radius; }
void Circle::setRadius(int R) { radius = R; }
void Circle::display() {
	cout << "Circle: " << name << " with " << color << " color, "
		<< "and radius = " << radius << endl;
}

Triangle::Triangle() {}
Triangle::Triangle(string tName, string tColor, double tBase, double tHeight, double tArea)
	: Shape::Shape(tName, tColor) {//D
	tArea = 0.5*(tBase*tHeight);
}
double Triangle::getHeight() { return height; }
void Triangle::setHeight(double H) { height = H; }
double Triangle::getBase() { return base; }
void Triangle::setBase(double B) { base = B; }
double Triangle::getArea() { return area; }
void Triangle::setArea(double A) { area = A; }
void Triangle::display() {}

