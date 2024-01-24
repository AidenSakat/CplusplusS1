/*************************************************************************
Cuyamaca College CS-181

File name:Area of a Rectangle	Area of a Rectangle.cpp

Description: Lab #6, Exercise #1, Brief description of exercise:Write a program that asks the user to enter the length and width of a rectangle. 
It should then calculate the area and then display the length, width and area of the rectangle. 

Developer: Aiden Sakat


*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getlength(double length);
double getwidth(double width);
double calcarea(double length, double width, int area);
void displayinfo(int length, int width, int area);

using namespace std;
int main()
{
	int length{}, width{}, area{};
	
	length = getlength(length);
	width = getwidth(width);
	area = calcarea(length, width, area);
	displayinfo(length, width, area);

	return 0;
}
/**********************************************************************
Function name:	getlength

Purpose: 		Will prompt the user for a length and return the length

Inputs: 		length

Returns: 		Returns the length

Revision history
Date 10/09/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/09/2022	Aiden Sakat		Created

************************************************************************/
double getlength(double length)
{
	
	cout << "Enter the length (must be >= 1): ";
	cin >> length;
	while (1 > length)
	{
		cout << "Enter the length (must be >= 1): ";
		cin >> length;
	}
	return length;
}
/**********************************************************************
Function name:	getwidth

Purpose: 		will prompt the user for a width and return the width.

Inputs: 		width

Returns: 		Returns the width

Revision history
Date 10/09/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/09/2022	Aiden Sakat		Created

************************************************************************/
double getwidth(double width)
{
	
	cout << "Enter the width (must be >= 1): ";
	cin >> width;
	while (1 > width)
	{
		cout << "Enter the width (must be >= 1): ";
		cin >> width;
	}
	return width;
}
/**********************************************************************
Function name:	calcarea

Purpose: 		will accept length and width as arguments and return the area.

Inputs: 		length, width, area

Returns: 		Returns the area

Revision history
Date 10/09/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/09/2022	Aiden Sakat		Created

************************************************************************/
double calcarea(double length, double width, int area)
{
	
	 area = length * width;
	return area;
}
/**********************************************************************
Function name:	displayinfo

Purpose: 		will accept length, width and area as arguments and display length, area and width.

Inputs: 		length, width, area

Returns: 		No return

Revision history
Date 10/09/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/09/2022	Aiden Sakat		Created

************************************************************************/
void displayinfo(int length, int width, int area)
{
	cout << "\nRectangle Data";
	cout << "\n----------";
	cout << "\n Length: " << length << endl;
	cout << "\n Width: " << width << endl;
	cout << "\n Area: " << area << endl;
}