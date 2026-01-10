//?  ADDITION OF TWO NUMBER USING POINTER
#include <iostream>
using namespace std;

int main()
{
    int x, y; // declare x and y , so x and y has garbage value
    cin >> x >> y;

    int *ptrx = &x; // &x fetches address of x and then store in it ptrx.
    int *ptry = &y; // &y fetches address of y and then store in it ptry.

    int result; // declare result so it has garbage value

    int *ptr_result = &result;
    /*
     ?    *ptrx -> 10
     ?    *ptry -> 20
     ?    *ptrx + *ptry -> 30
     ?    *ptr_result = 30; ---> we store 30 on the address stored in *ptr_result
     ?     result -> 30
     */
    *ptr_result = *ptrx + *ptry;

    cout << "Result = " << result << endl;
    cout << "Result = " << *ptr_result << endl;
    return 0;
}