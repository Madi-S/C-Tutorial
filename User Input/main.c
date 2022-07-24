#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // pointer
    printf("You are %d years old\n", age);

    double gpa;
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Your GPA is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);    // grab the whole line (variable, max_length, from_where)
    printf("Your name is %s", name);

    return 0;
}
