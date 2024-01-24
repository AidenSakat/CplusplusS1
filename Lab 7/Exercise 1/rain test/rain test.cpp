/*************************************************************************
Cuyamaca College CS-181

File name:rain test			rain test.cpp

Description: Lab #7, Exercise #1, Brief description of exercise:Write a program that lets the user enter rainfall totals for each month of the year into an array of doubles. 
Allow only positive rainfall total values. The program will then calculate and display total rainfall for the year, average rainfall for 12 months, and the 
months with the highest and lowest rainfall. 

Developer: Aiden Sakat


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;
double MONTHS[12];
void getinfo();
void LS(double largest, double smallest, int i);
double gethigh(double[]);
double getlow(double[]);
double totaled(double total);
double averagerainfall(double average);
int main()
{
	int largest = 0, smallest = 0, i = 0, average = 0;
	int total = 0;

	getinfo();
	totaled(total);
	averagerainfall(average);
	LS(largest, smallest, i);
}

/**********************************************************************
Function name:	getinfo

Purpose: 		Gets the info from user.

Inputs: 		

Returns: 		Void

Revision history
Date 10/16/2022 		By	Aiden Sakat	
************************************************************************/
 void getinfo()
{
	int i;
	for (i = 0; i < 12; i++)
	{
		cout << "Enter the rainfall (in inches) for month #" << i + 1 << ": ";
		cin >> MONTHS[i];
		while (MONTHS[i] < 0)
		{
			cout << "Rainfall must be 0 or more" << endl;
			cout << "Please re-enter" << ": ";
			cin >> MONTHS[i];
		}
	}

}

 /**********************************************************************
Function name:	gethigh

Purpose: 		Gets the name of the month with the highest rainfall

Inputs:			double array[]

Returns: 		high

Revision history
Date 10/19/2022 		By	Aiden Sakat
************************************************************************/
 double gethigh(double array[])
 {
	 int high = 0;
	 for (int x = 0; x < 12; x++)
	 {
		 if (array[x] > array[high])
			 high = x;
	 }
	 return high;
}

 /**********************************************************************
Function name:	getlow

Purpose: 		Gets the name of the month with the lowest rainfall

Inputs:			double array[]

Returns: 		low

Revision history
Date 10/19/2022 		By	Aiden Sakat
************************************************************************/
 double getlow(double array[])
 {
	 int low = 0;
	 for (int x = 0; x < 12; x++)
	 {
		 if (array[x] < array[low])
			 low = x;
	 }
	 return low;
 }

 /**********************************************************************
Function name:	LS

Purpose: 		Gets number of month with highest and lowest rainfall and then prints them with the name of the month

Inputs:			double largest, double smallest, int i

Returns: 		void

Revision history
Date 10/19/2022 		By	Aiden Sakat
************************************************************************/
 void LS(double largest, double smallest, int i)
{
	
	 int highest = gethigh(MONTHS);
	 int lowest = getlow(MONTHS);

	largest = MONTHS[0];
smallest = MONTHS[0];

for (i = 1; i < 12; i++)
{ 
	if (largest < MONTHS[i])
		largest = MONTHS[i];
	if (smallest > MONTHS[i])
		smallest = MONTHS[i];
}
cout << "Largest amount of rainfall was " << largest
<< " in month " << highest +1 << endl;
cout << "Least amount of rainfall was " << smallest
<< " in month " << lowest +1 << endl;
}
 /**********************************************************************
Function name:	totaled

Purpose: 		Calculates the total;

Inputs:			double total

Returns: 		total

Revision history
Date 10/16/2022 		By	Aiden Sakat
************************************************************************/
 double totaled(double total)
 {

for (int i = 0; i < 12; i++)

		 total += MONTHS[i];
cout << setprecision(2) << fixed << "\n\nThe total rainfall for the year is " << total << " inches." << endl;
return total;

 }

 /**********************************************************************
Function name:	averagerainfall

Purpose: 		Calculates the total rainfall then divides it by how many months there are to get the average

Inputs:			double average

Returns: 		average

Revision history
Date 10/16/2022 		By	Aiden Sakat
************************************************************************/
 double averagerainfall(double average)
 {
	 double total = 0;
	 for (int i = 0; i < 12; i++)

		 total += MONTHS[i];
	 average = total / 12;
	 cout << setprecision(2) << "The average rainfall for the year is " << average << " inches." << endl;
	 return average;
 }