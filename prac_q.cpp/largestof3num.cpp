#include <iostream>
using namespace std;

int main () {
    int a,b,c;

    cout<<"enter first number";
    cin >>a;

    cout <<"enter second number";
    cin >>b;

    cout <<"enter the third number";
    cin >>c;
     
    if(a>=b && a>=c) {
        cout <<"largest number is: " << a<<endl;

    }else if (b>= a&& b >=c){
        cout <<"largest number is :" <<b<<endl;
   }else {
        cout << "largest number is:" <<c<<endl;
 }
return 0;

}