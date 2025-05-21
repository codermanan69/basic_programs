#include<iostream>
using namespace std;

int main(){
int size;
cout << "ENTER THE NUMBER OF MARKS : ";
cin >> size;

int marks[size];
cout << "Enter the marks: ";
for(int i=0; i< size; i++)
{
cin >> marks[i];

}

for(int i=0; i< size; i++)
{
    cout << marks[i] << ",";

}

return 0;

}