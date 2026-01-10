/*
    Find the second largest digits in the string consisting of digits from '0' to '9'
    Input:- str = "2947578"
    Output:- 8
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "2947578";
    sort(str.begin(), str.end()); //2457789
    // int x = stoi(str);
    cout<<str<<endl;
    int n = str.size();
    for(int i = 0 ; i<n ; i++){
        if(i==n-2){
            cout<<"The second largest digit = "<<str[i];
        }
    }
}