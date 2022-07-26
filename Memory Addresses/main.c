#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[5][2] = {{42, 14}, {91, 19}, {23, 32}, {109, 901}, {74, 47}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
