#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;

class Shape {
public:
	Shape();
	Shape(string sName, string sColor);

	string getName();
	void setName(string);
	string getColor();
	void setColor(string);
	virtual void display();
protected:
	string name;
	string color;
private:
};

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(string rName, string rColor, int rWidth, int rHeight);
	int getWidth();
	void setWidth(int rWidth);
	int getHeight();
	void setHeight(int rHeight);
	void display() override;
private:
	int width;
	int height;
};

class Circle : public Shape {
public:
	Circle();
	Circle(string cName, string cColor, int cRadius);
	int getRadius();
	void setRadius(int);
	void display() override;
private:
	int radius;
};

class Triangle : public Shape {
public:
	Triangle();
	Triangle(string tName, string tColor, double tHeight, double tWidth, double tArea);
	double getBase();
	void setBase(double);
	double getHeight();
	void setHeight(double);
	double getArea();
	void setArea(double);

	void display() override;
private:
	double area;
	double base;
	double height;

};

// Add Triange shape (with base and height)
//  similar to Rectangle and Circle.


#endif  // SHAPES_H
