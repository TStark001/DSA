/*
                                        PARAMETERS
                    1.FORMAL PARAMETERS--> parameters that are defined during function
                                           definition is called formal parameters.
                    2.ACTUAL PARAMETERS--> parameters that are defined during the function call
                                           is called actual parameters.
*/

#include<iostream>
using namespace std;

int add(int x, int y){// FORMAL PARAMETERS--> int x and int y
    int c = x+y;
    return c;
}

int main()
{
    int a=5,b=5;
    cout<<add(a,b);// ACTUAL PARAMETERS--> a,b
    return 0;
}

// 2 hour 10 min