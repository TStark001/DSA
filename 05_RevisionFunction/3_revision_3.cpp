// Given radius of circle.Write a program to print area and circumference of circle.
#include<iostream>
using namespace std;

int square(int x){
    int result=x*x;
    return result;
}

double area(int r){
    double result = 3.14*square(r);
    return result;
}
double circumference(int r){
    double res = 2*3.14*r;
    return res;
}

int main (){
    int r=3;
    cout<<area(3)<<endl<<circumference(3)<<endl;
    return 0;
}