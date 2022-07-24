#include <stdio.h>
#include <stdlib.h>

int main()
{
    double firstNum;
    double secondNum;

    printf("Enter the first number: ");
    scanf("%lf", &firstNum);

    printf("Enter the second number: ");
    scanf("%lf", &secondNum);

    printf("The result is %f", firstNum + secondNum);

    return 0;
}
