#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, ngue = 1;
    char ch;
    srand(time(0));
    num = rand() % 100 + 1; // Random number between 1 to 100
    // printf("The Number is %d\n", num);

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Oh ho Lower Number Please!\n");
        }
        else if (guess < num)
        {
            printf("Oh ho ji Higher Number Please!\n");
        }
        else
        {
            printf("Damn! Congratulations you guessed the Number in %d attempts.\n", ngue);
        }
        ngue++;

    } while (guess!=num);
    
    printf("Press Ctrl+C to exit...\n");
    while (1) {
        // Your program logic goes here
    }

    return 0;
}