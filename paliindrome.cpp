#include <iostream>
using namespace std;

int main () {
    int num,rev=0,num1,d;
    cout <<"enter the number :";
    cin >> num;
    num1 =num;

    while (num !=0) {
        d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    if (rev == num1){
    cout << "the number is paliindome number : " << num1;
} else {
    cout << "the number is not a paliindome number : " << num1;
}
    
    return 0;
}