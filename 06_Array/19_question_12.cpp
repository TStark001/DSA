/*
   Rotate the given array 'a' by k steps where k is non-negative.
   * Note : k can greater then n as well where n is the size of array'a'.

   ! meaning of the program :- aagar mere array [1,2,3,4,5] ha or k=2 step sa rotate
   !                           karaga matlab step-1 ma mere array hoga :- [5,1,2,3,4]
   !                                               and step-2 ma :- [4,5,1,2,3]
   todo                      (FIRST METHOD)
*/
#include <iostream>
using namespace std;

int main()
{
   int array[] = {1, 2, 3, 4, 5};
   int n = 5;
   int k = 2;
   // k can be greater than n
   k = k % n;

   int ansarray[5];
   int j = 0;

   // inserting last k elements in array
   for (int i = n - k; i < n; i++)
   {
      ansarray[j++] = array[i];
   }

   // inserting first n-k elements in array
   for (int i = 0; i <= k; i++)
   {
      ansarray[j++] = array[i];
   }

   for (int i = 0; i < n; i++)
   {
      cout << ansarray[i] << " ";
   }
   cout << endl;

   return 0;
}