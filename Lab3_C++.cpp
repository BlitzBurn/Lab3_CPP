
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

class Person
{

};

class PersonReg 
{
    Person** personArr;
   

    PersonReg(int maxSize) 
    {
        for (int i = 0; i < maxSize; ++i)
        {
            personArr[i] = new Person[];
        }
    }

    
};