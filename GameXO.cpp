#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
using namespace std;
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);



int main() {
	char winner = ' ';
	char response = ' ';
	do {
		winner = ' ';
		response = ' ';
		resetBoard();
	
		while(winner == ' ' && checkFreeSpaces() != 0){
			printBoard();
			playerMove();
			winner = checkWinner();
			if(winner != ' ' || checkFreeSpaces() == 0){
				break;
			}
			computerMove();
			winner = checkWinner();
			if(winner != ' ' || checkFreeSpaces() == 0){
				break;
			}
		}	
		printBoard();
		printWinner(winner);
		cout << "\nWould you like to play again? (Yes/No): ";
		cin >> response;
		response = toupper(response);
	}
	while(response == 'Y');
	cout << "Thank for playing!";
    return 0;
}
void resetBoard(){
	for(int i = 0; i< 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = ' ';
		}
	}
}
void printBoard(){
	cout << board[0][0] << "  |" << board[0][1] << "  | " << board[0][2];
	cout << "\n---|---|---\n";
	cout << board[1][0] << "  |" << board[1][1] << "  | " << board[1][2];
	cout << "\n---|---|---\n";
	cout << board[2][0] << "  |" << board[2][1] << "  | " << board[2][2];
	cout << "\n";
	
}
int checkFreeSpaces(){
	int freeSpaces = 9;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(board[i][j] != ' ' ){
				freeSpaces--;
			}
		}
	}
	return freeSpaces;
}
void playerMove(){
	int x, y;
	do{
		cout << "Enter row #(1-3): ";
		cin >> x;
		x--;
		cout << "Enter column #(1-3): ";
		cin >> y;
		y--;
		if(board[x][y] != ' '){
			cout << "INVALID MOVE!\n";
		}
		else {
			board[x][y] = PLAYER;
			break;
		}
	}
	while(board[x][y] != ' ');
}
void computerMove(){
	srand(time(0));
	int x, y;
	if(checkFreeSpaces() > 0){
		do{
			x = rand() % 3;
			y = rand() % 3;
		}
		while(board[x][y]);
		board[x][y] = COMPUTER;
	}
	else{
		printWinner(' ');
	}
}
char checkWinner(){
	for(int i = 0; i < 3; i++){
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
			return board[i][0];
		}
	}
	for(int i = 0; i < 3; i++){
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
			return board[0][i];
		}
	}
	
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
		return board[0][0];
	}if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
		return board[0][2];
	}
	return ' ';
	
}
void printWinner(char winner){
	if(winner == PLAYER){
		cout << "YOU WIN!";
	}
	else if(winner == COMPUTER){
		cout << "YOU LOSE!";
	}
	else {
		cout << "IT'S A TIE!";
	}
}

