#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    printf("%d\n", num);
    num = 42;
    printf("%d\n", num);

    const int MY_NUM = 5;
    printf("%d\n", MY_NUM);
    return 0;
}
