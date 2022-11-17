#include <iostream>
#include <ctime>
#include <stdlib.h>

const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;


char getComputerOption() {
    srand(time(0));
    
    int num = rand() % 3 + 1;

    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}

char getUserOption() {
    char c;
    cout << "\t-------------------------------------"  << endl;
    cout << "\tRock, Paper or Scissors Game!" << endl;
    cout << "\tChoose one of the following options"  << endl;
    cout << "\t-------------------------------------"  << endl;
    cout << "\t(r) = Rock " << "\t" << "(p) = Paper" << "\t" << "(s) = Scissors " << endl;
    cout << "\tyour choice: ";
    cin >> c;
    
    while (c!='r' && c!='p' && c!='s' )
    {
        cout << "\tOnly rock, paper or scissors !!! " << endl;
        cout << "\t(r) = Rock " << "\t" << "(p) = Paper" << "\t" << "(s) = Scissors " << endl;
		cout << "\tyour choice: ";
        cin >>c;
    }
    return c;
}

void showSelectedOption(char option) {
    if (option == 'r') cout << "\tRock" << endl;
    if (option == 'p') cout << "\tPaper" << endl;
    if (option == 's') cout << "\tScissors" << endl;
}

void chooseWinner(char uChoice, char cChoice) 
{
    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "\tComputer Wins! Paper wraps Rock."<< endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "\tComputer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "\tComputer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "\tYou Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "\tYou Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "\tYou Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "\tTie. Play again win the Game." << endl;
    }
}
	int main() 
		{
	
	    char uChoice; 
	    char cChoice;
	    
	    uChoice = getUserOption();
	    cout << "\tYour choice is: "<< endl;
	    showSelectedOption(uChoice);
	    
	    cout << "\tComputer's choice is: "<< endl;
	    cChoice = getComputerOption();
	    showSelectedOption(cChoice);
	    
	    chooseWinner(uChoice, cChoice);
	    getchar();
	    system("pause");
	    return 0;
		}



