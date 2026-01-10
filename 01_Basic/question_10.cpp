// write a program to check whether the given alphabet is vowel or consonant using logical operator.
#include<iostream>
using namespace std;

int main()
{
    char alp;
    cin>>alp;

    if((alp=='a') || (alp=='e') || (alp=='i') || (alp=='o') || (alp=='u')){
        cout<<"Vowel";
    }
    else{
        cout<<"consonant";
    }
    return 0;
}