#include<iostream>
using namespace std;

int main(){
    int i,j,num=1,row;
    cout << "enter the number of number of rows : ";
    cin >> row;
    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            cout << num;
            num++;
        }
        cout << endl;

    }
    return 0;
}