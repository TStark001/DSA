#include <iostream>
using namespace std;

class Bike
{
public:
    int tyreSize;
    int engineSize;
    // default constructor
    Bike()
    {
        cout << "Hello World" << endl;
    }

    // parametrised constructor
    Bike(int tyreSize, int engineSize)
    {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
};

int main()
{
    Bike obj; // object creation ----> constructor ko call jayagi
    Bike tvs(12, 100);
    Bike honda(13, 120);
    Bike r15(14, 150);
    cout << tvs.tyreSize << " " << tvs.engineSize << endl;
    cout << honda.tyreSize << " " << honda.engineSize << endl;
    cout << r15.tyreSize << " " << r15.engineSize << endl;
}