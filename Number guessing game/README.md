# Number Guessing Game (C)

## Description
A simple two-player number guessing game written in C.
One player enters a secret number, and the second player
tries to guess it. The program gives hints until the
correct number is guessed.

## Concepts Used
- Variables
- do-while loop
- Conditional statements
- User input/output

## How to Compile and Run
```bash
gcc number_guessing.c -o number_guessing
./number_guessing

## Sample Output
         Number Guessing Game
        ----------------------
Player 1: Enter the secret number: 83

Player 2: Start guessing the number
Enter your guess: 50
Too low!
Enter your guess: 100
Too high!
Enter your guess: 80
Too low!
Enter your guess: 83
Correct! You guessed it in 4 attempts.
