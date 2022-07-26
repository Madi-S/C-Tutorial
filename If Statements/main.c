#include <stdio.h>
#include <stdlib.h>

int maxOf3(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}

int main()
{
    int result = maxOf3(900, 99999, 8000);
    printf("Result %d\n", result);

    if (!(3 > 2) || 3 == 5 || 3 != 9)
    {
        printf("This is True");
    }

    return 0;
}
