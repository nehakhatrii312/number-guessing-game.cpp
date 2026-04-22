#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int guess;
    int attempts = 0;
    int maxAttempts = 5;

    srand(time(0));
    int number = rand() % 100 + 1;

    cout << "Welcome to Number Guessing Game!" << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        attempts++;

        if (guess > number) {
            cout << "Too High!" << endl;
        }
        else if (guess < number) {
            cout << "Too Low!" << endl;
        }
        else {
            cout << "You Win in " << attempts << " attempts!" << endl;
            break;
        }
    }

    if (attempts == maxAttempts && guess != number) {
        cout << "Game Over! The number was: " << number << endl;
    }

    return 0;
}