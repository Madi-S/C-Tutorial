#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary = 5000;
    double pi = 3.14;
    char letter = 'C';

    // pointer is just a memory address
    // pointer variable
    int *pSalary = &salary;
    double *pPi = &pi;
    char *pLetter = &letter;

    printf("%p\n", pSalary);
    printf("%p\n", pPi);
    printf("%p\n", pLetter);

    return 0;
}
