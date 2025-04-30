#include <iostream>
using namespace std;

int main () {
    int a = 10 ;
    int* ptr = &a;

    int ** parptr = &ptr; //parptr is parent pointer 

    cout << &ptr << endl;
    cout << &parptr << endl;
    return 0; 
}