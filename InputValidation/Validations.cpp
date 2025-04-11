#include "Validations.h"

std::string validateName(std::string input)
{
	std::regex pattern(NAME);
	while(!std::regex_match(input, pattern))
	{
		system("cls");
		printf("Error in Name. Name can only have 30 characters, letters, spaces, dashes and periods.\n");
		printf("To try another name, type one now. To skip this field, press enter.\n");
		input = getInput();
	}
	return input;
}
std::string validateAddress(std::string input)
{
	std::regex pattern(ADDRESS);
	while (!std::regex_match(input, pattern))
	{
		system("cls");
		printf("Error in Address. Addresses can have maximum 60 characters: letters, spaces, dashes and periods.\n");
		printf("To try another Address, type one now. To skip this field, press enter.\n");
		input = getInput();
	}
	return input;
}
std::string validateCity(std::string input)
{
	std::regex pattern(CITY);
	while (!std::regex_match(input, pattern))
	{
		system("cls");
		printf("Error in City. Cities can have maximum 60 characters: letters, spaces, dashes and periods.\n");
		printf("To try another city name, type one now. To skip this field, press enter.\n");
		input = getInput();
	}
	return input;
}
std::string validateProvince(std::string input)
{
	std::regex pattern(PROVINCE);
	while (!std::regex_match(input, pattern))
	{
		system("cls");
		printf("Error in Province. That's not a 2 letter province abbreviation. Did you use capitals?\n");
		printf("To try again, enter your Province now. To skip this field, press enter.\n");
		input = getInput();
	}
	return input;
}
std::string validatePostalCode(std::string input)
{
	std::regex pattern(POSTAL_CODE);
	while (!std::regex_match(input, pattern))
	{
		system("cls");
		printf("Error in Postal Code. Postal Code must be of Format 'LNL NLN'.\n");
		printf("To try another Postal Code, type one now. To skip this field, press enter.\n");
		input = getInput();
	}
	return input;
}
std::string validatePhone(std::string input)
{
	std::regex pattern(PHONE);
	while (!std::regex_match(input, pattern))
	{
		system("cls");
		printf("Error in Phone. Phone must be of format 'XXX-XXX-XXXX'.\n");
		printf("To try another again, type one now. To skip this field, press enter.\n");
		input = getInput();
	}
	return input;
}