#include<iostream>
using namespace std;

int main(){
    int size,i,j,temp;
cout << "ENTER THE SIZE OF AN ARRAY: ";
cin >> size;
int a[size];
cout << "ENTER THE VALUES OF AN ARRAY : ";
for(i=0; i<size; i++){
    cin >> a[i];
}
for(i=size; i>=0; i--){
    for(j=0; j<=i-1; j++){
        if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
}
}
cout <<"SORTED ARRAY : \n";
for(i=0; i<size ; i++){
    cout <<a[i]<<" ";
}
return 0;
}