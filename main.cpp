//main driver file
//add header comments here.
#include "person.h"
const int CAPACITY = 20;

//function protoypes

//main and then functions.
int main()
{
	PersonType list[CAPACITY];
	int 	   count  = 0;
	char	   fileName[] = "persons.txt";

	cout << "Welcome to my Citizen’s Database." << endl;

	populatePersons(list, count, fileName);
	printPersons(list, count);

	//call your functions here to do what is required.
	if(addPerson(list, count) == true) {

		cout << "TODO:  output list" << endl;
	} 

	cout << "Thank you for using my Citizen Database!!" << endl;
	
	return 0;
}


