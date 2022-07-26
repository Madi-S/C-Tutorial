#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[60];
    int age;
    double gpa;
};

int main()
{
    struct Student john;
    john.age = 19;
    john.gpa = 3.9;

    // This will not work because array assignment is impossible
    // john.name = "John Doe";
    strcpy(john.name, "John Doe");
    strcpy(john.major, "Computer Sciences");

    printf("%s\n", john.name);
    printf("%s\n", john.major);
    printf("%d\n", john.age);
    printf("%f\n", john.gpa);

    struct Student jane;
    jane.age = 21;
    jane.gpa = 3.3;

    strcpy(jane.name, "Jane Doe");
    strcpy(jane.major, "Politacal Sciences");

    printf("%s\n", jane.name);
    printf("%s\n", jane.major);
    printf("%d\n", jane.age);
    printf("%f\n", jane.gpa);

    return 0;
}
