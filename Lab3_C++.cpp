
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
}

class Person
{
public:
    string namn, address;
    /*
    Person(string namn, string adress)
    {
        this->namn = namn;
        this->address = namn;
    }*/
};

class PersonReg 
{
    Person** personArr= new Person*[];
    Person* persons;
    int nrOfPersonsInArr=0;
    int maxSize;

    PersonReg(int maxSize) 
    {
        this->maxSize = maxSize;

        personArr = new Person*[maxSize];

       // personArr = sizeof(maxSize);

        for (int i = 0; i < maxSize; ++i)
        {

            personArr[i] = new Person[];
        }
    }

    bool LäggTill(Person* personPtr) 
    {
        try 
        {
            personArr[nrOfPersonsInArr] = personPtr;
            nrOfPersonsInArr++;
            return true;
        }
        catch (Person* person) 
        {
            cout << "could not add person to array"<<endl;
            return false;
        }
    }

    bool LäggTillTest(string namn, string adress)
    {
        try
        {
            personArr[nrOfPersonsInArr].namn = namn;
            return true;
        }
        catch (Person* person)
        {
            return false;
        }
    }

    void TaBortEntry(Person* ptr)
    {

    }

    Person* SökNamn(const string& namn) const 
    {

    }

    void Print() const
    {

    }

    void Töm()
    {

    }
};