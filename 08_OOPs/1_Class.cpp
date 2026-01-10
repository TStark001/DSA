#include<iostream>
using namespace std;

class Player{
    public:
    int health; // data member
    int score;

    void showHealth(){ // member function
        cout<<"Health is : "<<health;
    }
};

int main(){
    Player stark;
    stark.health = 100;
    stark.score = 90;
    cout<<stark.health<<endl;
    cout<<stark.score<<endl<<endl;

    Player flames;
    flames.health = 100;
    flames.score = 90;
    cout<<flames.health<<endl;
    cout<<flames.score<<endl;

    stark.showHealth();
}