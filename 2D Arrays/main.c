#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary = 5000;
    double pi = 3.14;
    char letter = 'M';

    // p stands for pointers
    printf("%p\n", &salary);
    printf("%p\n", &pi);
    printf("%p\n", &letter);

    return 0;
}
