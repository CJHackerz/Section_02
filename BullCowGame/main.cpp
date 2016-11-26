#include <iostream>
#include <string>
using namespace std;

//Function prototypes
void PrintIntro(); 
string GetGuess();

int main()
{
	//Function to print game intro.
	PrintIntro();

	//Function to get guess from user and print it back
	GetGuess();
	
	return 0;
}

//Function Definations.
void PrintIntro() { //introduce the game
	//Game Introduction.
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'am thinking of?" << endl;
}

string GetGuess() { //get a guess from a player.
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	//Print it back.
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}