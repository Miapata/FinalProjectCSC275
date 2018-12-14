#include "pch.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
#include "shapes.h"
using namespace std;
//Print the shape lsit to the console
void redrawShape();
//Write the shape list to a text file
void writeToTextFile();
//string to store line from text file
string line;
//Vector for our shapes
vector<Shape *> shapeList;
//Shape pointer
Shape * shapePtr;
//fstream to read and write to our text file
fstream textFile;

//Main program
void main() {
	//strings for name and color
	string inString1, inString2;

	//int for numerical properties 
	int inValue1, inValue2;

	//double for numerical properties that contain a decimal
	double dbValue1, dbValue2;

	//store our option in the choice variable
	int choice;

	//Rectangle pointer
	Rectangle * rectPtr;

	//Circle pointer
	Circle * cirPtr;

	//Triangle pointer
	Triangle * triPtr;

	cout << "*** Welcome to Shapes program ***\n";

	//Loop through the options
	do {
		cout << "\nMenu for entering shape:\n";
		cout << "1: To enter a rectangle\n";
		cout << "2: To enter a circle\n";
		cout << "3: To enter a triangle\n";
		cout << "4: To delete last entered shape\n";
		cout << "5: To display all shapes\n";
		cout << "90: To read shapes from file (input.txt)\n";
		cout << "91: To output shapes to file (output.txt)\n";
		cout << "99: Finish.\n";
		cout << "Please enter your choice (#): ";
		//Get the choice of our user
		cin >> choice;

		//Switch case statement for our chouce
		switch (choice) {

		//If the choice is 1, we create a rectangle with a name, color, width and height
		case 1:
			cout << "Rectangle Name: ";
			cin >> inString1;
			cout << "Rectangle Color: ";
			cin >> inString2;
			cout << "Rectangle Width: ";
			cin >> inValue1;
			cout << "Rectangle Height: ";
			cin >> inValue2;
			//set the rectangle pointer a new Rectangle
			rectPtr = new Rectangle(inString1, inString2, inValue1, inValue2);
			//add the rectangle to the list
			shapeList.push_back(rectPtr);
			break;

		//If our option is 2, create a circle with a name, color and radius
		case 2:
			cout << "Circle Name: ";
			cin >> inString1;
			cout << "Circle Color: ";
			cin >> inString2;
			cout << "Circle Radius: ";
			cin >> inValue1;
			//Assign circle pointer to a new Circle
			cirPtr = new Circle(inString1, inString2, inValue1);
			//Add it the shape list
			shapeList.push_back(cirPtr);
			break;
		//If our option is 3 we make a new triangle with a name, color, base and height
		case 3:
			// to add input for Triange
			cout << "Triangle Name: ";
			cin >> inString1;
			cout << "Triangle Color: ";
			cin >> inString2;
			cout << "Triangle Base: ";
			cin >> dbValue1;
			cout << "Triangle Height: ";
			cin >> dbValue2;
			//Assign the triagnle pointer to a newly created reactangle
			triPtr = new Triangle(inString1, inString2, dbValue1, dbValue2);
			//Add it to the shape list
			shapeList.push_back(triPtr);
			break;

		//If our option is 4, we delete the previously created shape
		case 4:
			// to delete last entered shape
			//Delete the last created shape in our list
			shapeList.pop_back();
			break;
		//If our option is 5, we print out all of the shape to the conosle
		case 5:
			//If the shape list is not null or empty, print it out
			if (shapeList.size()) redrawShape();
			break;

		//If our choice is 90, we read form a text file
		case 90:

			// to read shapes from file

			//Open the text file
			textFile.open("shapesText.txt");

			cout << "\nReading from text file" << endl;

			//While we are not at the end of the file
			while (getline(textFile, line)) {
				//print out the line
				cout << line << endl;
			}
			//close the text file
			textFile.close();
			break;

		//If our option is 91
		case 91:
			// to output shapes to file
			//Write the list to the text file
			writeToTextFile();
			break;
		}
	//While our choice is not 99
	} while (choice != 99);
	//Exit
	cout << "\nThank you for using this program.\n\n";
	system("pause");
}

//Method for printing out the shapes to the console
void redrawShape() {
	cout << "\nThese are the shapes: " << endl;
	//For every shape in the list
	for (unsigned int i = 0; i < shapeList.size(); i++) {
		//Assign the shape pointer to the incremented value
		shapePtr = shapeList[i];

		cout << shapePtr->display();
	}
}
//Method used to write shapes to the text file
void writeToTextFile() {

	//Open the text file
	textFile.open("shapesText.txt");

	cout << "\nWriting to text file. " << endl;
	//For every shape in the shape list
	for (unsigned int i = 0; i < shapeList.size(); i++) {
		//assign the shape pointer to the incremented i
		shapePtr = shapeList[i];

		//write the shape info to the text file
		textFile << shapePtr->display();

	}

	//close the text file
	textFile.close();
	cout << "\nText file saved." << endl;
}
