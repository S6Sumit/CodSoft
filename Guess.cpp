#include <bits/stdc++.h>
using namespace std;


int main() {
    
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've picked a secret number between 1 and 100. Try to guess it!" << endl;

    do {
    	cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << std::endl;
        } else {
            cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in "
                      << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
