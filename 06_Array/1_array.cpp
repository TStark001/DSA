/*
  *ARRAY* :- data structure which store a collection of homogenous item(same type).
                    example:- int,char,bool
            --> contiguous memory:- consecutive blocks of memory

        !   index-> location of every element in Array.
    $    Syntax:-   data_type array_name[array size];
    
    ARRAY are of two type :- 1. single dimensional array
                             2. Multi dimensional array
                             
*/

#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    cout << sizeof(array) << endl; // ! this will give size of array.
    cout << sizeof(array) / sizeof(array[0]) << endl;
    /*
     cout<<sizeof(array)/sizeof(array[0])<<endl; :- this will give length of the array(kitna element ha array ma)
                                                       by dividing the size of one element of array
   */
    return 0;
}
