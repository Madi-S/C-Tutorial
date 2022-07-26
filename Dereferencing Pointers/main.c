#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary = 5000;
    int *pSalary = &salary;

    printf("Pointer intself (memory address): %p\n", pSalary);
    printf("Dereferencing pointer (actual value): %d\n", *pSalary);
    printf("Dereferencing pointer (actual value): %d\n", *&salary);
    printf("Dereferencing pointer (actual value): %d\n", *&*&salary);
    printf("Dereferencing pointer (actual value): %d\n", *&*&*&salary);

    return 0;
}
