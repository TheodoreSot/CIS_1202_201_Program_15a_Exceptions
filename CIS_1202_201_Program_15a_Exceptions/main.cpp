#include <string>
#include <iostream>
using namespace std;

char character(char start, int offset);

int main()
{
    try
    {
        cout << character('a',1) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    try
    {
        cout << character('a',-1) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    try
    {
        cout << character('Z',-1) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    try
    {
        cout << character('?',5) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    return 0;
}

char character(char start, int offset)
{
    char letterWanted;
    string invalidRangeExpection = "Character wanted is not a letter";
    string invalidCharacterExcpeption= "Character entered was not a letter.";
    
    if(!isalpha(start))
    {
        throw invalidCharacterExcpeption;
    }
    
    if(!isalpha(start+offset))
    {
        throw invalidRangeExpection;
    }
    
    letterWanted = start+offset;

    return letterWanted;
}
