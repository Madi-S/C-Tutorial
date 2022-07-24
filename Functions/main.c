#include <stdio.h>
#include <stdlib.h>

void greet(char name[], int age)
{
    printf("Greetings %s\nYou are %d years old\n", name, age);
}

int main()
{
    greet("Mr Madi", 42);
    greet("Bob", 17);
    greet("Dzhalil", 99);
    return 0;
}
