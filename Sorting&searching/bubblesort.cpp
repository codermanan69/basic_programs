#include<iostream>
using namespace std;

int main() {
    int size, i, j, temp;

    cout << "ENTER THE SIZE OF AN ARRAY: ";
    cin >> size;

    int arr[size];

    cout << "ENTER THE VALUES OF AN ARRAY: ";
    for(i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "SORTED ARRAY USING BUBBLE SORT: ";
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
