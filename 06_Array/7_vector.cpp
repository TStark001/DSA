/*
  VECTORS :- 1.dynamic array
             2.resize when insert/delete elements
             3.contiguous memory allocation
!               DECELARATION OF VECTOR
*          first we should declare header file for vector i.e. [#include<vector>]
            SYNTAX:- vector<data_type> vector_name;  OR
                     vector<data_type> vector_name(size); --> if we include size

            2.Size :- v.size(); ---> give length of vector
            3.Resize :- v.resize(new_size);
            4.Capacity :- v.capacity();
$                                [capacity>=size]
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
  vector<int> v;

  cout << "Size: " << v.size() << endl;
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(1);
  cout << "Size: " << v.size() << endl;
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(2);
  cout << "Size: " << v.size() << endl;
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(3);
  cout << "Size: " << v.size() << endl;
  cout << "Capacity: " << v.capacity() << endl;

  v.resize(5);
  cout << "Size: " << v.size() << endl;
  cout << "Capacity: " << v.capacity() << endl;

  v.resize(10);
  cout << "Size: " << v.size() << endl;
  cout << "Capacity: " << v.capacity() << endl;

  v.pop_back();
  cout << "Size: " << v.size() << endl;
  cout << "Capacity: " << v.capacity() << endl;

  return 0;
}
//! #include<algrothim> :- this header file use to define "reverse" identifier
//!                         which help us to reverse vector in proram.
