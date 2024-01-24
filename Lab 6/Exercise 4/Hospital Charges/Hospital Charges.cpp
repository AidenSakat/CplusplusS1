/*************************************************************************
Cuyamaca College CS-181

File name: Hospital Charges		Hospital Charges.cpp

Description: Lab #6, Exercise #4, Brief description of exercise: The program must use two overloaded functions to calculate the total charges. 
One of the functions must accept arguments for the inpatient data, while the other function accepts arguments for outpatient information. 
Both functions should return the total charges. 

Developer: Aiden Sakat


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;
void inpatient(int days, int roomrate, int medicationcharges, int fees, int total);
void outpatient(int medicationcharges, int fees, int total);
;
int main()
{
	int days{}, roomrate{}, medicationcharges{}, fees{}, total{};
	string patienttype;
	cout << "This program will compute patient hospital charges.";
	cout << "\nWhat was the patient type?\nIn-patient or Out-patient? (I or O) ";
	cin >> patienttype;
	while (patienttype != "I" && patienttype != "O")
	{
		cout << "ERROR! This program only accepts I and O as input \nIn-patient or Out-patient? (I or O) ";
		cin >> patienttype;
	}
	if (patienttype == "I")
	{
		inpatient(days, roomrate, medicationcharges, fees, total);
	}
	else if (patienttype == "O")
	{
		outpatient(medicationcharges, fees, total);
	}
}
/**********************************************************************
Function name:	inpatient

Purpose: 		accept arguments for the inpatient data then calculates the total

Inputs: 		days, roomrate, medicationcharges, fees, total

Returns: 		No return

Revision history
Date 10/12/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/12/2022	Aiden Sakat		Created

************************************************************************/
void inpatient(int days,int roomrate, int medicationcharges, int fees, int total)
{
	cout << "Number of days in the hospital: ";
	cin >> days;
	cout << "Daily room rate: $";
	cin >> roomrate;
	while (roomrate < 0)
	{
		cout << "Positive numbers only\n";
		cout << "Daily room rate: $";
		cin >> roomrate;
	}
	cout << "Medication charges: $";
	cin >> medicationcharges;
	while (medicationcharges < 0)
	{
		cout << "Positive numbers only\n";
		cout << "Medication charges: $";
		cin >> medicationcharges;
	}
	cout << "Lab fees and other service charges: $";
	cin >> fees;
	while (fees < 0)
	{
		cout << "Positive numbers only\n";
		cout << "Lab fees and other service charges: $";
		cin >> fees;
	}
	total = roomrate * days + medicationcharges + fees;
	cout << "\nThe total charges are $" << total << endl;
}
/**********************************************************************
Function name:	outpatient

Purpose: 		accept arguments for the outpatient data then calculates the total

Inputs: 		medicationcharges, fees, total

Returns: 		No return

Revision history
Date 10/12/22		By	Aiden Sakat		Description
------------------------------------------------------------------------
10/12/2022	Aiden Sakat		Created

************************************************************************/
void outpatient(int medicationcharges, int fees, int total)
{
	cout << "Medication charges: $";
	cin >> medicationcharges;
	while (medicationcharges < 0)
	{
		cout << "Positive numbers only\n";
		cout << "Medication charges: $";
		cin >> medicationcharges;
	}
	cout << "Lab fees and other service charges: $";
	cin >> fees;
	while (fees < 0)
	{
		cout << "Positive numbers only\n";
		cout << "Lab fees and other service charges: $";
		cin >> fees;
	}
	total = medicationcharges + fees;
	cout << "\nThe total charges are $" << total << endl;
}