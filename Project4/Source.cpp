#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
		<< endl << endl << endl << endl << endl << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "Welcome To The Rock, Paper, Scissors Game.." << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "Game Rules.." << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "If the same item is formed, it's a tie." << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "If a rock and scissors are formed, the rock wins, because a rock can smash scissors. " << endl << endl;
	cout <<"\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "If scissors and paper are formed, the scissors win, because scissors can cut paper." << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "If paper and a rock are formed, the paper wins, because a sheet of paper can cover a rock. " << endl << endl;
	this_thread::sleep_for(chrono::seconds(6));
	system("cls");


	int username(3);
	int password(4);


	username = 123;
	password = 1998;


	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""     Authentication.";
	cout << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "please enter user name: ";
	cin >> username;
	cout << endl << endl;
	cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "please enter password : ";
	cin >> password;

	if (username == 123 && password == 1998)
	{
		cout << endl << endl;

		cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" "     login successful..";
		this_thread::sleep_for(chrono::seconds(2));
		system("cls");
		char ch;

		int win = 0;
		int tie = 0;
		int lose = 0;

		do {
			int choice;

			cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << endl;
			cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "-- Lets play Rock, Paper, Scissors! --" << endl;


			cout << "Press 1 for Rock" << endl << endl;

			cout << "Press 2 for Paper" << endl << endl;

			cout << "Press 3 for Scissors:" << endl << endl;
			cin >> choice;

			system("cls");

			int computer_choice = rand() % 3 + 1;
			cout << "The computer chose: " << computer_choice << endl;
			if (choice == 1 && computer_choice == 1) 
			{
				cout << "Rock meets Rock its a tie!" << endl;
				tie++;
			}
			else if (choice == 1 && computer_choice == 2) {
				cout << "Rock is covered by Paper the computer wins!." << endl;
				lose++;
			}
			else if (choice == 1 && computer_choice == 3) {
				cout << "Rock crushes Scissors you win!" << endl;
				win++;
			}
			else if (choice == 2 && computer_choice == 1) {
				cout << "Paper covers Rock you win!" << endl;
				win++;
			}
			else if (choice == 2 && computer_choice == 2) {
				cout << "Paper meets Paper its a tie!" << endl;
				tie++;
			}
			else if (choice == 2 && computer_choice == 3) {
				cout << "Paper is cut by Scissors the computer wins!" << endl;
				lose++;
			}
			else if (choice == 3 && computer_choice == 1) {
				cout << "Scissors are crushed by Rock computer wins!" << endl;
				lose++;
			}
			else if (choice == 3 && computer_choice == 2) {
				cout << "Scissors cuts Paper you win!" << endl;
				win++;
			}
			else if (choice == 3 && computer_choice == 3) {
				cout << "Scissors meet Scissors its a tie!" << endl;
				tie++;
			}
			else {
				cout << "You didn't select 1, 2, or 3" << endl;
			}
			cout << "Wins: " << win << endl;
			cout << "Ties:" << tie << endl;
			cout << "Losses:" << lose << endl;


			cout << "Would you like to play again? Y/N" << endl;
			cin >> ch;
			system("CLS");
		} while (ch == 'Y' || ch == 'y');
		return 0;

	}
	else
	{
		system("cls");
		cout << endl << endl;
		cout << "\t""\t""\t""\t""\t""\t""\t""\t""\t""\t" << "          Username or Password incorrect try again.....";

		exit(0);
	}





}