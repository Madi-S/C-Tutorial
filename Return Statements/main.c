#include <stdio.h>
#include <stdlib.h>

// Function Prototype
double cube(double num);

int main()
{
    double number = cube(9.0);
    printf("Result %f", number);

    return 0;
}

double cube(double num)
{
    return num * num * num;
}
