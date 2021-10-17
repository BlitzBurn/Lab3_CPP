
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
}

class Person
{
    Person(const string& namn, const string& adress)
    {
    
    }
};

class PersonReg 
{
    Person** personArr;
    Person* persons;
    int nrOfPersonsInArr=0;

    PersonReg(int maxSize) 
    {
        for (int i = 0; i < maxSize; ++i)
        {
            personArr[i] = new Person[];
        }
    }


    bool AddPersonWithPointer() 
    {

    }

    bool AddPersonWithNameAndAdress(const string& namn, const string& adress)
    {

    }

    void TaBortEntry(Person* ptr) 
    {

    }
    
};