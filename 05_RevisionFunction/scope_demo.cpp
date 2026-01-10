#include<iostream>
using namespace std;

string name = "Stark"; // global scope

void fun(){
    //
        int x=10;
        for (int y=0;y<5;y++){
            x = x+y;
            int z = x*x;
        }
        // cout<<x<<" "<<y<<" "<<z;
        cout<<name<<endl;
    //

}

int main()
{
    cout<<name<<endl;
    name = "Flames";
    fun();
    // cout<<x<<endl; --> not accessible here because it is local to fun 
    return 0;
}

/*
        LOCAL SCOPE -->  variable that are store inside a function block and can be 
                         accessed inside it only.The are unknow entities outside the 
                         block.
                         MATLAB--> jis block ma variable ko banayaga gaya ha usi ma accessed 
                                    kar sakta ha or kahi nahi.
*/  