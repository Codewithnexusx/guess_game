#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));                        // seed the random number generator
    int randomnumber = (rand() % 100) + 1; // generate 100 random number
    int no_of_guess = 0;
    int guessed;
    // printf("random Number: %d\n", randomnumber);

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > randomnumber)
        {
            printf("Lower number please\n");
        }
        else if (guessed < randomnumber)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Congrat!!!\n");
        }
        no_of_guess++;
    } while (guessed != randomnumber);
    printf("You guessed the number in %d guesses...", no_of_guess);

    return 0;
}