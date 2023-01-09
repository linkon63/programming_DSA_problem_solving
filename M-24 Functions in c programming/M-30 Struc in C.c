#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks;
};

int main()
{
    struct Student s1;

    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",&s1.name);
    printf("Enter roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter marks: ");
    scanf("%d",&s1.marks);

    printf("Displaying Information:\n");
    printf("Name: %s \n", s1.name);
    printf("Roll number: %d \n", s1.roll);
    printf("Marks: %d\n", s1.marks);

    return 0;
}

