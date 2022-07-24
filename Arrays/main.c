#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Max-length of the array
    int myNumbers[10] = {4, 42, 49, 100, 9};
    myNumbers[8] = 190;
    myNumbers[8] = 999;
    printf("%d\n", myNumbers[2]);
    printf("%d\n", myNumbers[8]);
    printf("%d\n", myNumbers[9]);
    
    
    double myFloatingNumbers[] = {4.2, 42.0, 49.999, 100.101, 9.23};
    printf("%f", myFloatingNumbers[3]);
    return 0;
}
