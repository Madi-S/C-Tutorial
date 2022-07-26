#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &op); // this space is entered on purpose

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else
    {
        printf("[ERROR] Invalid operator");
        return 0;
    }
    printf("[SUCCESS] The result is %f", result);

    return 0;
}
