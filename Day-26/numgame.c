#include <stdio.h>

int main()
{
    int number = 25, guess;

    printf("Guess the number (1 to 50): ");
    scanf("%d", &guess);

    if (guess == number)
    {
        printf("Congratulations! You guessed the correct number.");
    }
    else if (guess > number)
    {
        printf("Too High!");
    }
    else
    {
        printf("Too Low!");
    }

    return 0;
}