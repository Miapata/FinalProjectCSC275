#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;

//This is our base class that any other shape can derive from
//For example, Circle: public Shape
class Shape {
public:
	//Constructor
	Shape();

	//Create a shape with name and color
	Shape(string sName, string sColor);

	//get the name
	string getName();

	//set the name
	void setName(string);

	//get the color
	string getColor();

	//set the color
	void setColor(string);

	//display all of the information of our shape
	virtual string display();
protected:
	string name;
	string color;
private:
};

//Rectangle derived from shape
class Rectangle : public Shape {
public:
	//Rectangle constructor
	Rectangle();

	//Create a rectangle with name, color, width and height
	Rectangle(string rName, string rColor, int rWidth, int rHeight);

	//return the width

	int getWidth();
	//set the width of the rectangle
	void setWidth(int rWidth);

	//get the height of the rectangle
	int getHeight();

	//set the height of the rectangle
	void setHeight(int rHeight);

	//Display the properties of the rectangle
	string display() override;
private:
	int width;
	int height;
};

//Circle derived from Shape
class Circle : public Shape {
public:
	//Circle constructor
	Circle();

	//Create a circle with name, color and radius
	Circle(string cName, string cColor, int cRadius);

	//get the radius 
	int getRadius();

	//set the radius
	void setRadius(int);

	//display the properties of the circle
	string display() override;

private:

	//Radius of the circle
	int radius;
};

//Triangle class derived from Shape
class Triangle : public Shape {
public:
	//Trangle constructor
	Triangle();

	//Set the name, color,base and height of the Triangle
	Triangle(string tName, string tColor, double tBase, double tHeight);

	//Get the base of the triangle
	double getBase();

	//Set the base of the triangle
	void setBase(double);

	//get the height of the triangle
	double getHeight();

	//Set the height of our triangle
	void setHeight(double);

	//Get the are of our triangle
	double getArea();

	//Display the properties of our triangle
	string display() override;
private:
	//Area
	double area;
	//Base
	double base;
	//Height
	double height;

};

// Add Triange shape (with base and height)
//  similar to Rectangle and Circle.


#endif  // SHAPES_H
