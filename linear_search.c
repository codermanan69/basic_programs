#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int i, item, f = 0;

    printf("Enter searching item: ");
    scanf("%d", &item);

    for (i = 0; i < 5; i++) {
        if (a[i] == item) {
            f = 1;
            break;
        }
    }

    if (f == 1) {
        printf("Item found at index %d\n", i);
    } else {
        printf("Item not found\n");
    }

    return 0;
}
