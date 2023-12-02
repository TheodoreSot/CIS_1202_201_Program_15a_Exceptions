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
    
    try
    {
        cout << character('a',-32) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    return 0;
}

char character(char start, int offset)
{
    int offSetBoundary=25;
    char letterWanted;
    string invalidRangeExpection = "Invalid Range Exception";
    string invalidCharacterExcpeption= "Invalid Character Exception";
    
    if(!isalpha(start))
    {
        throw invalidCharacterExcpeption;
    }
    
    if(!isalpha(start+offset))
    {
        throw invalidRangeExpection;
    }
    
    
    if(offset>offSetBoundary||offset<(-offSetBoundary))
    {
        throw invalidRangeExpection;
    }
    
    letterWanted = start+offset;

    return letterWanted;
}
