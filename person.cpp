//implememtation file for struct PersonType
#include "person.h"

//function to read from file and populate list
void populatePersons(PersonType list[], int& count, const char fileName[])
{
    ifstream        inFile;
    char            name[MAX_CHAR];
    char            citizen[MAX_CHAR];
    int age = 0;

    inFile.open(fileName);
    if(!inFile)
    {
        cerr << "Fail to open " << fileName << " to populate inventory!" << endl;
        exit(1);
    }
    inFile >> name;
    while(!inFile.eof())
    {
        inFile >> citizen;
        inFile >> age;
        strcpy(list[count].name, name);
        strcpy(list[count].citizenship, citizen);
        list[count].age = age;
        count++;

        inFile >> name;
    }
    inFile.close();
}

//function to print list
void printPersons(const PersonType list[], int count)
{
    cout << "List of citizen database!" << endl;
    for(int index = 0; index < count; index++)
    {
        cout << list[index].name << ";" << list[index].citizenship;
        cout << ";" << list[index].age << endl;
    }
}

//add your function here

//read in person name, person citizenship, and age and populate aPerson
//e.g strcpy(aPerson.name, tempName)
//read position to insert inside the function - see sample
//run
//position could be read from the user or you could set a
//number that is not more than count. If you read from the
//user, check to make sure position is not > than count.
//shift and insert aPerson in the right position
bool addPerson(PersonType list[], int &count) {

/*
Enter your name:
Navid
Enter your citizenship:
Ecuador
Enter your age:
34
Enter position number:
2
*/

    return false; // Return true if add is successful.
}

/*
Welcome to my Citizen’s Database.
Here is your list so far:
Gayathri;USA;22
Stephanie;USA;27
Priya;India;34
Ahmed;Nigeria;52
Enter your name:
Navid
Enter your citizenship:
Ecuador
Enter your age:
34
Enter position number:
2
After adding a person, the list is:
Gayathri;USA;22
Stephanie;USA;27
Navid;Ecuador;34
Priya;India;34
Ahmed;Nigeria;52
Thank you for using my Citizen Database!!
*/

/*
Welcome to my Citizen’s Database.
Here is your list so far:
3
Gayathri;USA;22
Stephanie;USA;27
Priya;India;34
Ahmed;Nigeria;52
Enter your name:
Navid
Enter your citizenship:
Ecuador
Enter your age:
34
Enter position number:
9
Error! Invalid position.
Thank you for using my Citizen Database!!
*/

/*
Welcome to my Citizen’s Database.
Here is your list so far:
Gayathri;USA;22
Stephanie;USA;27
Priya;India;34
Ahmed;Nigeria;52
Enter your name:
Lucy
Enter your citizenship:
Ecuador
Enter your age:
34
Enter position number:
0
After adding a person, the list is:
Lucy;Ecuador;34
Gayathri;USA;22
Stephanie;USA;27
Priya;India;34
Ahmed;Nigeria;52
Thank you for using my Citizen Database!!
*/

/*
Welcome to my Citizen’s Database.
4
Here is your list so far:
Gayathri;USA;22
Stephanie;USA;27
Priya;India;34
Ahmed;Nigeria;52
Enter your name:
Arely
Enter your citizenship:
Mexico
Enter your age:
45
Enter position number:
4
After adding a person, the list is:
Gayathri;USA;22
Stephanie;USA;27
Priya;India;34
Ahmed;Nigeria;52
Arely;Mexico;45
Thank you for using my Citizen Database!!
*/
