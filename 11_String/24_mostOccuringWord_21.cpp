/*
    Given a sentence str , return the word that is occuring most
    number of time in the given sentence.
    And also display the max number of word occuring in the senctence.  
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "I am the best. I want to become Billionaire.";
    // string str = "Stark is the best. Stark want to become Billionaire.";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout<<endl;

    int maxCount = 1;
    int count = 1;
    for(int i=0 ; i <v.size() ; i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxCount = max(maxCount,count);
    }

    count =1;
    for(int i=0 ; i <v.size() ; i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxCount==count){
            cout<<v[i]<<"="<<maxCount<<endl;
        }
    }

    return 0;
}