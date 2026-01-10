#include<iostream>
using namespace std;

/*
                            SYNTAX TO CREATE FUNCTION.
            return_type function_name(parameter1,parameter2....){
                statement;
            }

            in case function doesn't return anything, we can use void.
*/

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}

int main()
{
    int a=4,b=5;
    float c=9.8,d=5.6;
    cout<<add(a,b)<<endl; //first add function ko call kar raha ha.
    cout<<add(a,b,5)<<endl; //second add function ko call kar raha ha.
    cout<<add(c,d)<<endl;//third float function ko call kar raha ha.
    return 0;
}

/*
        two type of function are there.
        1. User defined function.
        2. Standard defined function.
*/