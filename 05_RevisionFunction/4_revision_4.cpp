#include<iostream>
using namespace std;

bool checkEligibity(int age , int limit){
    if(age>=limit){
        //this person is eligible to vote.
        return true;
    }
    else{
        //this person is not eligible to vote.
        return false;
    }
}

int main (){
    int voting_limit=18;
    int age;
    cin>>age;
    int is_eligible_for_voting= checkEligibity(age, voting_limit);
    if(is_eligible_for_voting){
        cout<<"Yes, the current person eligible to vote";
    }
    else{
        cout<<"No, the current person not eligible to vote";
    }

    return 0;
}