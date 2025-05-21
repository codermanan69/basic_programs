#include<iostream>
using namespace std;

int main() {
    int size, i, j, key;

    cout << "ENTER THE SIZE OF AN ARRAY: ";
    cin >> size;

    int arr[size];

    cout << "ENTER THE VALUES OF AN ARRAY: ";
    for(i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "SORTED ARRAY USING INSERTION SORT: ";
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
