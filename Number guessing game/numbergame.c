#include <stdio.h>
int main() {
    int secret, guess, attempts = 0;
    printf("\t Number Guessing Game\n");
    printf("\t----------------------\n");
    printf("Player 1: Enter the secret number: ");
    scanf("%d", &secret);
    printf("\nPlayer 2: Start guessing the number\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}
