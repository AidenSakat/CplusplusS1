/*************************************************************************
Cuyamaca College CS-181

File name:Falling Distance	Falling Distance.cpp

Description: Lab #6, Exercise #2, Brief description of exercise: Write a function named fallingDistance that accepts an object’s falling time (in seconds) as an argument. 
The function should return the distance, in meters, that the object has fallen during that time interval.  
 Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments and displays the return value. 

Developer: Aiden Sakat


*************************************************************************/

#include <iostream>
#include <iomanip>
void fallingdistance(int t, int i);

using namespace std;
int main()
{
	int t = 0, i{};
	
	 fallingdistance(t, i);

	return 0;
}
/**********************************************************************
Function name:	fallingdistance

Purpose: 		accepts an object’s falling time (in seconds) as an argument.

Inputs: 		t, i

Returns: 		No return

Revision history
Date 10/10/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/10/2022	Aiden Sakat		Created

************************************************************************/
void fallingdistance(int t, int i)
{
	cout << "Seconds\t\tDistance";
	cout << "\n=================================\n";

	for (int i = 1; i <= 10; i++)
		cout << setprecision(2) << fixed << "" << i << " \t\t " << (.5 * 9.8 * pow(i, 2)) << " meters" << endl;
}