#include <iostream>

using namespace std;

int main() {
	int guess, numOfGuesses = 0;
	
	srand(time(NULL));	
	int num = rand() % 100 + 1;

	while (guess != num) {
		cout <<	 "Guess a number between 1-100!" << endl;
		cin >> guess;
		numOfGuesses++;

		if (guess > num) {
			cout << "You guessed too high! Try again." << endl;
		}
		else if (guess < num) {
			cout << "You guessed too low! Try again." << endl;
		}
		else {
			char input = 'n';
			cout << "Congrats! You guessed the right number in " << numOfGuesses << " guesses!\nWould you like to play again? (y/n)" << endl;
			cin >> input;

			if (input == 'y') {
				guess = 0;
				num = rand() % 100 + 1;
				numOfGuesses = 0;
			}
			else {
				break;
			}			
		}
	}

	return 0;
};
