/*
*                       StringStream Class
!       is class ko use karna ka liya header file use karnga(#include<sstream>)
*/
#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string str = "I am the best";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    /* ya line of code str ma store sara substring ko aalaga aalaga line ma 
       show karga output window ma. 
    */
}