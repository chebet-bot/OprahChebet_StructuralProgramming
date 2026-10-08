#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int regNo, marks;
        char name[50];
        char grade;

        printf("\nEnter Registration No: ");
        scanf("%d", &regNo);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Marks: ");
        scanf("%d", &marks);

      
        int bracket = marks / 10;
        if (bracket > 10) bracket = 10; 

        switch (bracket) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
        }

        printf("\n--------------------------------\n");
        printf("      STUDENT INFORMATION\n");
        printf("--------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        switch (marks >= 40) {
            case 1:
                printf("Status: Pass\n");
                break;
            default:
                printf("Status: Fail\n");
        }
        printf("--------------------------------\n");
    }

    return 0;
}
