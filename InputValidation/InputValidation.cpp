// InputValidation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Validations.h"


void addContact(int index, Contact addressBook[]);

int main(void) 
{
	int contactCount = 0;
	Contact addressBook[9];
	bool exit = false;
	int choice = displayMenu();
	while (!exit)
	{
		switch (choice)
		{
		case 1:
			addContact(0, addressBook);
			contactCount++;
			break;
		case 2:
			break;
		case 3:
			exit = true;
			break;
		default:
			printf("That isn't a valid choice. Press enter to try again.\n");
			getch();
			break;
		}
	}
}

void addContact(int index, Contact addressBook[])
{
	std::string input;
	index = index % 10;
	system("cls");
	printf("Please enter a name:\n");
	input = getInput();
	if (validateName(input) != "\n")
	{
		addressBook[index].name = input;
	}
	printf("Please enter an address:\n");
	input = getInput();
	if (validateAddress(input) != "\n")
	{
		addressBook[index].address = input;
	}
	printf("Please enter a city:\n");
	input = getInput();
	if (validateCity(input) != "\n")
	{
		addressBook[index].city = input;
	}
	printf("Please enter a province:\n");
	input = getInput();
	if (validateProvince(input) != "\n")
	{
		addressBook[index].province = input;
	}
	printf("Please enter a postal code\n");
	input = getInput();
	if (validatePostalCode(input) != "\n")
	{
		addressBook[index].province = input;
	}
	printf("Please enter a phone number:\n");
	input = getInput();
	if (validatePhone(input) != "\n")
	{
		addressBook[index].phoneNumber = input;
	}
	return;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
