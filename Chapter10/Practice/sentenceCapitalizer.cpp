/*Marco Mayorga

COSC-1436

November 15, 2022

Sentence Capitalizer
Write a function that accepts a pointer to a C-string as an argument
and capitalizes the first character of each sentence in the string. For
instance, if the string argument is "hello. my name is Joe. what is your
name?" the function should manipulate the string so that it contains
"Hello. My name is Joe. What is your name?" Demonstrate the function in a
program that asks the user to input a string then passes it to the
function. The modified string should be displayed on the
screen. Optional Exercise: Write an overloaded version of this
function that accepts a string class object as its argument.
*/

#include <iostream>
#include <cstring>

using namespace std;
// Prototype
void getToUppper(char *[]);

int main()
{
    char firstCharacter;
    string userInput = "string";
    firstCharacter = userInput[0];
    firstCharacter = toupper(firstCharacter);
    userInput[0] = firstCharacter;
    cout << userInput;
}

void getToUppper(char *[]) // Will uppercase the first letter //outputs correct string.
{
    
}