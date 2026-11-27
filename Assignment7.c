#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Results:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number: %d", s[i].rollno);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f", s[i].marks);

        if(s[i].marks >= 40)
            printf("\nResult: Pass\n");
        else
            printf("\nResult: Fail\n");
    }

    return 0;
}
