#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll: %d\nName: %s\nMarks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
