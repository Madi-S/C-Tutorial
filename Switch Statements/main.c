#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char grade = 'B';
    switch (grade)
    {
    case 'A':
        printf("You did a great job!");
        break;
    case 'B':
        printf("You did well");
        break;
    case 'C':
        printf("That's alright!");
        break;
    case 'D':
        printf("That's bad");
        break;
    case 'E':
        printf("That's horrible");
        break;
    case 'F':
        printf("You have failed");
        break;
    default:
        printf("Invalid value for grade");
    }
    return 0;
}
