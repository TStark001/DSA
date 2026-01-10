// write a program to print the day based on the day numner.
#include <iostream>
using namespace std;

int main()
{
    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thrusday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
    default:
        cout<<"Enter Valid Number!"<<endl;
    }

    return 0;
}

/*
isma error kiya the 
case '1' ---> ya error ha jo hum kiya the.isma 1 integer nahi string ha kue ki 1 underscore ka under ha.
*/ 
