#include <iostream>
using namespace std;

int main() {
    int rows;

    cout<< "Enter the number of rows (1 to 20):";
    cin >> rows;

    if(rows < 1 || rows > 20) {
        cout << "Please enter a number between 1 and 20." << endl;
        return 1;
    }

    for(int i = 1; i <= rows; ++i){
        for(int j = 1; j <= i; ++j){
            cout << "* ";
        }
        cout<< endl;
    }

    return 0;
}