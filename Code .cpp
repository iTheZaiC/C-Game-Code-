#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Use time to generate random numbers

    int randomNum = rand() % 100;  // Generate a number between 0 and 99

    int guess;
    int guessCount = 0;
    bool correctGuess = false;

    std::cout << "Guess a number between 0 and 99!" << std::endl;

    while (!correctGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        guessCount++;

        if (guess == randomNum) {
            std::cout << "Congratulations! You guessed the number in " << guessCount << " attempts." << std::endl;
            correctGuess = true;
        } else if (guess < randomNum) {
            std::cout << "Enter a higher number." << std::endl;
        } else {
            std::cout << "Enter a lower number." << std::endl;
        }
    }

    return 0;
}

// The Code You See Is Written By ZaiC
