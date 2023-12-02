// Theodore Sotirelis
//CIS 1202 201
//December 3, 2023

#include <string>
#include <iostream>
using namespace std;

char character(char start, int offset);

int main()
{
    //try block 1
    try
    {
        cout << character('a',1) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    //try block 2, testing for the exception of thet arget character not being a letter
    try
    {
        cout << character('a',-1) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    //try block 3
    try
    {
        cout << character('Z',-1) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    //try block 4, testing for the exception of the initial character not being a letter
    try
    {
        cout << character('?',5) << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString << endl;
    }
    
    //try block 5, testing for the exception preventing case conversion
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

// function calculates character offsets,
char character(char start, int offset)
{
    int offSetBoundary=25;         //how fare can a offset go, 25 prevents going between uppper and lower cases
    char letterWanted;             //letter wanted given offset
    
    // exception strings
    string invalidRangeExpection = "Invalid Range Exception";
    string invalidCharacterExcpeption= "Invalid Character Exception";
    
    //throws exception if the given character is not a letter
    if(!isalpha(start))
    {
        throw invalidCharacterExcpeption;
    }
    
    //throws exception if the character calculated with the offset is not a letter
    if(!isalpha(start+offset))
    {
        throw invalidRangeExpection;
    }
    
    // throws exception if the offset is beyond given range
    if(offset>offSetBoundary||offset<(-offSetBoundary))
    {
        throw invalidRangeExpection;
    }
    
    letterWanted = start+offset;

    return letterWanted;        // return character wanted
}
