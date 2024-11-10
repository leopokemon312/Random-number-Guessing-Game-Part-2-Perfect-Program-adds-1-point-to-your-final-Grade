#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed random number generator
    int number = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int guessCount = 0;

    cout << "Guess the number between 1 and 100:\n";

    // Loop until the correct guess
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        guessCount++;  // Increment the guess counter

        if (guess > number) {
            cout << "Too high, try again.\n";
        }
        else if (guess < number) {
            cout << "Too low, try again.\n";
        }
        else {
            cout << "Congratulations! You guessed it in " << guessCount << " tries.\n";
            break;
        }
    }

    return 0;
}
