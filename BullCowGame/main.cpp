#include <iostream>
#include <string>
using namespace std;

//Functions
void PrintIntro(); 

int main()
{
	
	
	//get guess from the player
	string Guess = "";
	cout << "Enter your Guess: ";
	getline(cin, Guess);
	//repeat guess back to them
	cout << "Your guess was: " << Guess << endl;
	
	
	return 0;
}

//Function Definations
void PrintIntro() {
	//Game Introduction
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'am thinking of?" << endl;
}