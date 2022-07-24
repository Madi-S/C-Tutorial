#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Data types
    int age = 40;
    double gpa = 3.4;
    char gprade = 'A';
    char name[] = "John";

    // Variables
    char characterName[] = "Madi";
    int characterAge = 35;
    printf("Hello. My name is %s\n", characterName);
    printf("I am %d years old\n", characterAge);

    characterAge = 36;

    printf("Next year I am turning %d", characterAge);

    return 0;
}
