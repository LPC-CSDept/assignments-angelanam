#include <iostream>
#include <cmath> //using pow() function to properly calculate circle
using namespace std;

int main()
{
	const float pi = 3.14159;
	int choice;
	//input : choice
	//output : asks question based on choice

    //prints Geometry Calculator menu:
	cout << "Geometry Calculator" << endl;
	cout << " 1. Calculate the Area of a Circle " << endl;
	cout << " 2. Calculate the Area of a Rectangle " << endl;
	cout << " 3. Calculate the Area of a Triangle " << endl;
	cout << " 4. Quit " << endl;
	cout << " Enter your choice (1-4): ";
	cin >> choice; //input answer between 1-4

	switch (choice)
	{
		float area;

		case 1: //choice #1
			int radius;

			cout << "What is the radius?" << endl;
			cin >> radius;

			if (radius < 0) //won't calculate # less than 0
			{
				cout << "The radius must be a positive number, please try again." << endl;
			}
			else //calculates by multiplying pi by radius squared
			{
				area = pi * pow(radius, 2);

				cout << "The area of the circle is " << area << endl;
			}
			break;

		case 2: //choice #2
			float width, length;

			cout << "What is the length?" << endl;
			cin >> length;

			if (length > 0)
			{
				cout << "What is the width?" << endl;
				cin >> width;

				if (width > 0) //calculates & prints area, multiplying length by width
				{
					area = length * width;
					cout << "The are of the rectangle is " << area << endl;
				}
				else //won't calculate if either response is less than 0
				{
					cout << "The width must be greater than 0, please try again." << endl;
				}
			}
			else
			{
				cout << "The length must be greater than 0, please try again." << endl;
			}
			break;

		case 3: //choice #3
			float height, base;

			cout << "What is the base?" << endl;
			cin >> base;

			if (base > 0)
			{
				cout << "What is the height?" << endl;
				cin >> height;

				if (height > 0) //calculates & prints area, multiplying base by height, then by 0.5
				{
					area = (base * height) * .5;
					cout << "Area of the triangle is " << area << endl;
				}
				else
				{
					cout << "Height must be greater than 0, please try again." << endl;
				}
			}
			else
			{
				cout << "Base must be greater than 0, please try again." << endl;
			}
			break;

		case 4: //choice #4 , ends program
			cout << "Bye!" << endl;
			break;

		default: //if input doesn't land between 1-4:
			cout << "You must choose between 1-4, please try again." << endl;
			break;
	}

return 0;
}