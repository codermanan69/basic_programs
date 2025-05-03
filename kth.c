#include <stdio.h>
int main () {
    int i,n,k;
    printf("enter the size of an array");
    scanf("%d", &n);
    int arr[n];
    printf("enter the values in an array");
    for(i=0; i<n ; i++) {
        scanf("%d", &arr[i]);

    }int num;
    printf("enter the eleent to insert ");
    scanf("%d" , &k);
    arr[k]=num;
    for(i=0 ; i<n ; i++){
        printf("%d", arr[i]);

    }return 0;
}