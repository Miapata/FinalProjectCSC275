#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "shapes.h"
using namespace std;

//Shape constructor
Shape::Shape() {}

//Creates a shape with name and color
Shape::Shape(string sName, string sColor) {
	name = sName;
	color = sColor;
}

//Get the name of our shape
string Shape::getName() { return name; }

//Set the name of our shape
void Shape::setName(string sName) { name = sName; }

//get the color of the shape
string Shape::getColor() { return color; }

//Set the color of the shape
void Shape::setColor(string sColor) { color = sColor; }

//Display the output of the shape
string Shape::display() {
	return +"Shape: " + name + " with " + color + " color." + "\n";
}

//Rectangle Constructor
Rectangle::Rectangle() {}

//Create a rectangle with name, color, width and height
Rectangle::Rectangle(string rName, string rColor, int rWidth, int rHeight)
	: Shape::Shape(rName, rColor)
{
	width = rWidth;
	height = rHeight;
}

//return the width of the rectangle
int Rectangle::getWidth() { return width; }

//set the width of the rectangle
void Rectangle::setWidth(int W) { width = W; }

//get the Height of the rectangle
int Rectangle::getHeight() { return height; }

//set the height of the rectangle
void Rectangle::setHeight(int H) { height = H; }
//Display the properties of the rectangle
string Rectangle::display() {

	return "Rectangle: " + name + " with " + color + " color, "
		+ "and width = " + to_string(width) + ", height = " + to_string(height) + "\n";
}
//Circle Constructor
Circle::Circle() {}

//Create a circle with a name, color and radius
Circle::Circle(string cName, string cColor, int cRadius)
	: Shape::Shape(cName, cColor) {
	radius = cRadius;
}
//Get the radius of the circle
int Circle::getRadius() { return radius; }

//set the radius of the circle
void Circle::setRadius(int R) { radius = R; }

//Dispaly the properties of the circle
string Circle::display() {
	return  "Circle: " + name + " with " + color + " color, "
		+ "and radius = " + to_string(radius) + "\n";
}

//Triangle constructor
Triangle::Triangle() {}

//Create a triangle with name, color , base and height + calculate the area
Triangle::Triangle(string tName, string tColor, double tBase, double tHeight)
	: Shape::Shape(tName, tColor) {
	base = tBase;
	height = tHeight;
	area = 0.5*(tBase*tHeight);
}

//Get the height of the triangle
double Triangle::getHeight() { return height; }

//set the height of the triangle
void Triangle::setHeight(double H) { height = H; }

//Get the base of the triangle
double Triangle::getBase() { return base; }

//set the base of the triangle
void Triangle::setBase(double B) { base = B; }

//Get the area of the triangle
double Triangle::getArea() { return area; }

//Display the properties of the triangle
string Triangle::display() {

	return "Triangle " + name + " with " + color + " color, "
		+ "and base = " + to_string(base) + ", height = " + to_string(height) + +", area = " + to_string(area) + "\n";
}

