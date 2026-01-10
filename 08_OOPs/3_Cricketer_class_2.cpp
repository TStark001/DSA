// this is dynamic allocation
#include <iostream>
#include <vector>
using namespace std;

class Cricketer
{
public:
    string name;
    int age;
    int noOfTestMatch;
    int averageScore;
};

int main()
{
    vector<Cricketer> cricketers;
    int n;
    cout << "Enter the size : - ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Cricketer *cricketer = new Cricketer;
        cin.ignore(); //  clear buffer before getline
        cout << "Name : ";
        getline(cin, cricketer->name);
        cout << "Age : ";
        cin >> cricketer->age;
        cout << "No of Test Match : ";
        cin >> cricketer->noOfTestMatch;
        cout << "Averge Score : ";
        cin >> cricketer->averageScore;
        cricketers.push_back(*cricketer);
    }
    cout << "--------------The Detail of Cricketer Listed Below--------------" << endl;
    for (auto c : cricketers)
    {
        cout << c.name << " " << c.age << " " << c.noOfTestMatch << " " << c.averageScore << endl;
    }
}