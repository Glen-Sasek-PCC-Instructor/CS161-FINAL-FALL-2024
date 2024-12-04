//struct for PersonType
#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

const int MAX_CHAR = 101;

struct PersonType
{
	char name[MAX_CHAR];
	char citizenship[MAX_CHAR];
	int age;
};

//function prototypes
void populatePersons(PersonType list[], int& count, const char fileName[]);
void printPersons(const PersonType list[], int count);

//add your function prototype here.

//read in person name, person citizenship, and age and populate aPerson
//e.g strcpy(aPerson.name, tempName)
//read position to insert inside the function - see sample
//run
//position could be read from the user or you could set a
//number that is not more than count. If you read from the
//user, check to make sure position is not > than count.
//shift and insert aPerson in the right position
bool addPerson(PersonType list[], int &count);

