#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX_ATTEMPTS = 7;
    int attempts = 0;
    int number = 42;
    int userNumber;

    printf("Welcome to the guessing game, you have to guess the number between 0 and 100\nYou have %d attempts\nGood luck!\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS)
    {
        printf("Your guess: ");
        scanf("%d", &userNumber);

        if (userNumber == number)
        {
            printf("Congratulations you have won!\n");
            break;
        }
        else if (userNumber > number)
        {
            printf("Unfortunately, the number is too high\n");
        }
        else
        {
            printf("Unfortunately, the number is too low\n");
        }

        attempts++;
    }
    if (attempts == MAX_ATTEMPTS)
    {
        printf("You have lost\n");
    }

    return 0;
}
