// array using loops

#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]); // size of array.

    // using for loop
    for (int i = 0; i < size; i++)
    { // here i represent index of array
        cout << array[i] << endl;
    }

    /*
                 *   FOR EACH LOOP
                     SYNATAX :- for(data_type variable:array){
                                }
    */
    for (int ele : array)
    {
        cout << ele << endl;
    }

    // ! While loop
    int index = 0;
    while (index < size)
    {
        cout << array[index] << endl;
        index++;
    }
    return 0;
}