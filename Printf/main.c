#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        %c - chars
        %s - strings
        %d - integers
        %f - floating point numbers
    */
    int favNumber = 42;
    char myChar = 'e';
    printf("Hello %c\"\n", myChar);
    printf("My favourite %s is %d but I like %f as well\n", "number", favNumber, 3.14);
    return 0;
}
