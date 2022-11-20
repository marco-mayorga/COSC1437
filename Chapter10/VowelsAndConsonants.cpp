/*Marco Mayorga

COSC-1436

November 15, 2022


Vowels and Consonants

Write a function that accepts a pointer to a C-string as its argument.
The function should count the number of vowels appearing in the string and return that number.

Write another function that accepts a pointer to a C-string as its argument.
This function should count the number of consonants appearing in the string and return that number.

Demonstrate these two functions in a program that performs the following steps:

The user is asked to enter a string.
    The program displays the following menu:
        A.Count the number of vowels in the string
        B.Count the number of consonants in the string
        C.Count both the vowels and consonants in the string
        D.Enter another string
        E.Exit the program
    The program performs the operation selected by the user and repeats until the user selects E to exit the program.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>

using namespace std;

// Prototypes
int vowels(char *);
int consonants(char *);
const int SIZE = 81; //byte size of character

int main()
{
    // 1.Variables

    char choice; // to hold the choice given in the menu.
    char cstring[SIZE]; // the string is stored like this example: |h|e|l|l|o|\0|
    int C = 0;
    int V = 0;
    int CV = 0;

    // 2. Talk to user
    cout << "Enter a string: ";

    // 3. Store the cstring for easy access to each letter.
    cin.getline(cstring, SIZE);
    cout << endl;

    // 5. Display the menu
    do
    {
        cout << "\tA) Count the number of vowels in the string\n";
        cout << "\tB) Count the number of consonants in the string\n";
        cout << "\tC) Count both the vowels and consonants in the string\n";
        cout << "\tD) Enter another string\n";
        cout << "\tE) Exit the program\n";
        cout << endl;

        // User Choice
        cout << "Enter A, B, C, D or E: ";
        cin >> choice;

        while (toupper(choice) < 'A' || toupper(choice) > 'E')
        {
            cout << "\nEnter only A, B, C, D or E: ";
            cin >> choice;
            cout << endl;
        }
        // What the code does based on the menu choice
        switch (toupper(choice))
        {
        // Calls vowls function and counts them
        case 'A':
            cout << endl;
            cout << "The String has ";
            cout << vowels(cstring);
            cout << " vowels.\n\n";
            cout << endl;
            break;
        // Calls consonants function and counts them
        case 'B':
            cout << endl;
            cout << "The String has ";
            cout << consonants(cstring);
            cout << " consonants.\n\n";
            cout << endl;
            break;
        // Calls vowls and cononants function adds up the reults and returns it.
        case 'C':
            cout << endl;
            cout << "The String has ";
            C = consonants(cstring);
            V = vowels(cstring);
            CV = C + V;
            cout << CV;
            cout << " vowels and consonants.\n\n";
            cout << endl;
            break;
        // Allows user to input another string
        case 'D':
            cout << endl;
            cout << "Enter a string: ";
            // the cin.ignore() ignores the enter the user pressed after choosing a menu option
            // where they I used cin.
            // If the <enter> isn't ignored then the getline reads <enter> before user can type
            // as <enter> is already in the input stream.
            cin.ignore();
            cin.getline(cstring, SIZE);
            cout << endl;
        }

    }
    // Just runs the do loop while the option E isnt chosen.
    while (toupper(choice) != 'E');
}

// Checks letter by letter for all vowls
int vowels(char *str)
{
    // Variables
    char V[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'}; // the vowels
    int vowelCount = 0;

    // Strings are stored like this:  |h|e|l|l|o|\0|
    // So we check the string isnt empty leaving only the 0

    while (*str != 0) // While the string is not empty
    {
        for (int count = 0; count < sizeof(V); count++) // Loop through aray of Vowels
        {
            if (*str == V[count]) // if the vowel is found in the string increase vowel count then break.
            {
                vowelCount++;
                break;
            }
        }
        str++; // Stepping into the next letter in the string
    }
    return vowelCount;
}

// Checks letter by letter for all Consonants
int consonants(char *str)
{
    char C[] = {'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f', 'G', 'g', 'J', 'j',
                'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'P', 'p', 'Q', 'q',
                'S', 's', 'T', 't', 'V', 'v', 'X', 'x', 'Z', 'z', 'H', 'h',
                'R', 'r', 'W', 'w', 'Y', 'y'};
    int consonantCount = 0;

    while (*str != 0) // While the string is not empty
    {
        for (int count = 0; count < sizeof(C); count++) // Loop through aray of Vowels
        {
            if (*str == C[count]) // if the Consonant is found in the string increase Consonant count then break.
            {
                consonantCount++;
                break;
            }
        }
        str++; // Stepping into the next letter in the string
    }
    return consonantCount;

    return 0;
}