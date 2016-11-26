#include <iostream>
#include <string>
using namespace std;


int main()
{
	//Game Introduction
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'am thinking of?" << endl;
	
	//get guess from the player
	string Guess = "";
	cout << "Enter your Guess: ";
	cin >> Guess;
	//repeat guess back to them
	cout << "Your guess was: " << Guess << endl;
	
	
	return 0;
}