#include <iostream>
using namespace std;

void displayTheScreen();

void gamePlay();

void gameBoard();

void playerone();

void playertwo();

void occupated();

int GamePlayerOne = 0;

int GamePlayerTwo = 0;

char SOSArray[] = { '1','2','3','4','5','6','7','8','9','10','11','1 2','13','14','15','16','17','18','19','20','21','2 2','23','24' };

void main(){

	displayTheScreen();

}

void displayTheScreen(){

	cout << "S.O.S game" << endl << endl;

	char choose;

	cout << " 1.) Simple Game" << endl;

	cout << endl;

	cout << " 2.) General Game" << endl;

	cout << endl;

	cout << " 3.) Quit" << endl;

	cout << "Selection: ";

	cin >> choose;

	system("cls");

	switch (choose)	{

	case '1':

		gamePlay();

		break;

	case '2':

		gamePlay();

		break;

	case '3':

		break;

	default:

		cout << "\t\t\t\tMake a selection:" << endl;
	}
}

void gamePlay() {

	gameBoard();

	playerone();

}

void gameBoard() {

	cout << "\tPLayer 1 :" << GamePlayerOne << " | | | | | | |" << endl;

	cout << "\tPLayer 2 :" << GamePlayerTwo << " | " << SOSArray[0] << " | " << SOSArray[1] << " | " << SOSArray[2] << " | " << SOSArray[3] << " | " << SOSArray[4] << " | " << SOSArray[5] << " |" << endl;

	cout << "\t\t\t | " << SOSArray[6] << " | " << SOSArray[7] << " | " << SOSArray[8] << " | " << SOSArray[9] << " | " << SOSArray[10] << " | " << SOSArray[11] << " |" << endl;

	cout << "\t\t\t | " << SOSArray[12] << " | " << SOSArray[13] << " | " << SOSArray[14] << " | " << SOSArray[15] << " | " << SOSArray[16] << " | " << SOSArray[17] << " |" << endl;

	cout << "\t\t\t | " << SOSArray[18] << " | " << SOSArray[19] << " | " << SOSArray[20] << " | " << SOSArray[21] << " | " << SOSArray[22] << " | " << SOSArray[23] << " |" << endl;

}

void occupated() {

	cout << "That block is already taken, choose another one!" << endl;

}

void playerone() {

	int x, z;

	cout << "Player 1, please choose a block number: ";

	cin >> x;

	cout << endl;

	system("cls");

	GameTable();

	z = 1;

	while (z == 1) {

		if (x < 1 || x>24) {
			playerone(); 
		}

		if (SOSArray[x - 1] == 'S' || SOSArray[x - 1] == 'O') {

			occupated();

			playerone();

		}

		else {

			z = 0;

			SOSArray[x - 1] = 'S';
		}

		//PlayerOneWinCheck();

	}

}

void playertwo() {

	int x, z;

	cout << "Player 2, please choose a block number: ";

	cin >> x;

	cout << endl;

	system("cls");

	GameTable();

	z = 1;

	while (z == 1) {

		if (x < 1 || x>24) { 
			playertwo(); 
		}

		if (SOSArray[x - 1] == 'S' || SOSArray[x - 1] == 'O') {

			occupated();

			playertwo();

		}

		else

		{

			z = 0;

			SOSArray[x - 1] = 'O';

		}

		//PlayerTwoWinCheck();

	}

}