/*************************************************************************
Cuyamaca College CS-181

File name:Salsa Sales	Salsa Sales.cpp

Description: Lab #7, Exercise #2, Brief description of exercise: Write a program that lets a salsa maker keep track of sales for five different types of salsa: 
mild, medium, sweet, hot, and zesty. 

Developer: Aiden Sakat


*************************************************************************/

#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
using namespace std;
void getinfo(string[]);
double totalsales();
int gethigh(int[]);
int getlow(int[]);
void displayinfo(double, string[]);
int salsa[5];
int main()
{
	string salsatype[] = { "mild", "medium", "sweet", "hot", "zesty" };

	double total=0;
	getinfo(salsatype);
	total = totalsales();
	displayinfo(total, salsatype);
	
}
/**********************************************************************
Function name:	getinfo

Purpose: 		Recieves the inputs from the user 

Inputs: 		string salsatype[]

Returns: 		Void


Date 10/18/2022		By	Aiden Sakat	

************************************************************************/
void getinfo(string salsatype[])
{

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "Jars sold last month of "
			<< salsatype[i] 
			<< "\t: ";
	cin >> salsa[i];
	while (salsa[i] <= 0) 
		{
		cout << "Jars sold must be 0 or more. Please re-enter: ";
		cin >> salsa[i];
		}
	}
}

/**********************************************************************
Function name:	totalsales

Purpose: 		uses the user inputs to calculate the total salsa sold.

Inputs: 		

Returns: 		total


Date 10/18/2022		By	Aiden Sakat

************************************************************************/
double totalsales()
{
	double total{};
	for (int i = 0; i < 5; i++)
	{
		total += salsa[i];
	}
		return total;
	
}
/**********************************************************************
Function name:	gethigh

Purpose: 		Gets the highest salsa purchased

Inputs:			int array[]

Returns: 		high


Date 10/19/2022		By	Aiden Sakat

************************************************************************/
int gethigh(int array[])
{
	int high = 0;
	for (int x = 0; x < 5; x++)
	{
		if (array[x] > array[high])
			high = x;
	}
	return high;
}

/**********************************************************************
Function name:	getlow

Purpose: 		Gets the lowest salsa purchased

Inputs:			int array[]

Returns: 		low


Date 10/19/2022		By	Aiden Sakat

************************************************************************/
int getlow(int array[])
{
	int low = 0;
	for (int x = 0; x < 5; x++)
	{
		if (array[x] < array[low])
			low = x;
	}
	return low;
}
/**********************************************************************
Function name:	displayinfo

Purpose: 		displays all of the info

Inputs:			double total, string salsatype[]

Returns: 		void


Date 10/19/2022		By	Aiden Sakat

************************************************************************/
void displayinfo(double total, string salsatype[])
{
	int most = gethigh(salsa);
	int least = getlow(salsa);

	int i;
	cout << "\n\n\n\t Salsa Sales Report \n\n";
	cout << "Name\t\t\t Jars sold" << endl;
	cout << "\n=======================================" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << salsatype[i] << "\t\t\t\t" << salsa[i] << endl;
	}
	cout << "\nTotal Sales:\t\t\t" << total << endl;
	cout << "High seller: " << salsatype[most] << endl;
	cout << "Low seller: " << salsatype[least] << endl;
}