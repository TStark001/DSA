// this is static allocation.
#include<iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int age;
    int noOfTestMatch;
    int averageScore;
};

int main(){
    Cricketer ABD;
    ABD.name = "ABD";
    ABD.age = 41;
    ABD.noOfTestMatch = 114;
    ABD.averageScore = 51;

    Cricketer virat;
    virat.name = "Virat Kohli";
    virat.age = 37;
    virat.noOfTestMatch = 123;
    virat.averageScore = 47;
    Cricketer cricketer[2] = {ABD,virat};

    for(int i = 0 ; i<2 ; i++){
        cout<<cricketer[i].name<<endl;
        cout<<cricketer[i].age<<endl;
        cout<<cricketer[i].noOfTestMatch<<endl;
        cout<<cricketer[i].averageScore<<endl;
    }
}