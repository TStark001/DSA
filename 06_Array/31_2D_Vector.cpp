/*
        2D Vector :- vector of vector datatype
!       Syntax :- vector<vector<data_type>> vector_name;
todo                        Note :- all operation are same as 1D vector.
            2.Size :- v.size(); ---> give length of vector
            3.Resize :- v.resize(new_size);
            4.Capacity :- v.capacity();
todo                                [capacity>=size]
            5.Add Element :- v.push_back(element)--->this will add element to end of the vector.
                             v.insert(position,element)--->this will help to add element to particular position of the vector.
                                    *position(related to position of first element of vector)
                             v.begin() ---> this will give the position of first element of vector.
                             v.end() ---> this will give the  position of end element of vector.
            6.Delete Element :- v.pop_back(); ---> this will delete element from end of the vector.
                                v.erase(position); ---> this will help to delete particular vector from the vetor.
                                         *position(related to position of first element of vector)
                                v.clear(); ---> this will complete delete the vector.
            7.Sort() :- In C++, sort() is a built-in function used to sort the given range in desired order.
                        It provides a simple and efficient way to sort the data in C++ but it only works on
                        data structures that provide random access to its elements such as vectors and arrays.
*             Syntax :- sort(first, last, comp); OR sort(v.begin(),v.end()){here v is vector}
              Parameters:
                          first: Iterator to the beginning of the range to be sorted.
                          last: Iterator to the element just after the end of the range.
                          comp (optional): Binary function, functor, or lambda expression
                          that compares two elements in the range.By default, it is set as < operator so the
                          sort() function sorts the data in ascending order.


!                                #include<algrothim> :- this header file use to define "reverse" identifier
!                                                       which help us to reverse vector in proram.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Declaring and initializing 2d vector
    vector<vector<int>> v = {{1, 2}, {3, 4}};

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}