/*************************************************************************
Cuyamaca College CS-181

File name: Coin Flip Simulation		Coin Flip Simulation.cpp

Description: Lab #6, Exercise #3, Brief description of exercise:  Write a function named coinFlip that simulates flipping a coin. 
When you call the function, it should generate a random number in the range of 1 through 2.

Developer: Aiden Sakat


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void coinflip(int &head, int &tail);
void displayinfo(int head, int tail);

int main()
{
	int head{}, tail{};
	srand(time(NULL));

	coinflip(head, tail);
	displayinfo(head, tail);
	
	return 0;
}

/**********************************************************************
Function name:	coinflip

Purpose: 		Asks user for how many flips and flips it then counts how many heads and tails.

Inputs: 		&head, &tail

Returns: 		No return

Revision history
Date 10/11/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/11/2022	Aiden Sakat		Created

************************************************************************/
void coinflip(int &head, int &tail)
{

	int flips;
	cout << "How many coin flips? "; 
	cin >> flips;

	for (int i = 0; i < flips; i++) 
	{
		if (rand() % 2 + 1 == 1)  
		{
			cout << i + 1 << ":\t\t" << "heads\n";
			head++;   
		}
		else
		{
			cout << i + 1 << ":\t\t" << "tails\n";
			tail++;   
		}
	}
}
/**********************************************************************
Function name:	displayinfo

Purpose: 		Displays the total heads and tails.

Inputs: 		head, tail

Returns: 		No return

Revision history
Date 10/11/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/11/2022	Aiden Sakat		Created

************************************************************************/
void displayinfo(int head, int tail)
{
	cout << "\nTotal heads: " << head;
	cout << "\nTotal Tails: " << tail;
}