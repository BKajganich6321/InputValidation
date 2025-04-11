#include "Validations.h"


std::string getInput()
{
    std::string stringOut;
    char input[2000];
    char* inputPtr = input;
    fgets(input, sizeof(input), stdin);
    trimBack(input);
    trimFront(input);
    if (input[0] == '\0')
    {
        stringOut = "\n";
    }
    else
    {
        stringOut.assign(input, sizeof(input));
    }
    return stringOut;
}

int displayMenu()
{
    printf("Please select:\n");
    printf("1: Add a Contact\n");
    printf("2: Display all Contacts\n");
    printf("3: Exit\n");
    printf("Please pick a number:\n");
    return getNum();
}



void trimBack(char name[])
{
    int nameSize = strlen(name);
    for (int i = nameSize; i >= 0; i--)
    {
        if (name[i] == ' ')
        {
            name[i] = '\0';
        }
        if (name[i] != '\0' && name[i] != ' ' && name[i] != '\n')
        {
            break;
        }
        if (name[i] == '\n')
        {
            name[i] = '\0';
        }
    }
    return;
}

void trimFront(char name[])
{
    char newName[2000];
    bool foundLetter = false;
    int j = 0;
    int nameSize = strlen(name);
    for (int i = 0; i <= nameSize; i++)
    {

        if (name[i] != ' ' || foundLetter)
        {
            newName[j] = name[i];
            foundLetter = true;
            j++;
        }
    }
    strcpy_s(name, sizeof(newName), newName);
    return;
}

int getNum(void) {

    char record[121] = { 0 }; // Buffer to store input string
    int number = 0; // Variable to store the converted number

    // Prompt the user for input and read the input string
    fgets(record, 121, stdin);

    // Attempt to convert the string to a double
    if (sscanf_s(record, "%d", &number) != 1) {

        // If conversion fails, set the number to -1
        number = -1;
    }

    return number; // Return the double (or -1 if conversion failed)
}