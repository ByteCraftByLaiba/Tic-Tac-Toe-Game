#include <iostream>
#include <fstream>
using namespace std;

void input_array(char arr[3][3])
{
	char num = '1';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = num++;
		}
	}
}

void display(char arr[3][3])
{
	cout << endl;
    cout << "                                             _____________" << endl;
	cout << "                                             |"<<" "<<arr[0][0]<<" "<< "|"<<" "<<arr[0][1]<<" " <<"|"<< " "<<arr[0][2]<<" "<<"|" << endl;
	cout << "                                             _____________" << endl;
	cout << "                                             |"<<" "<<arr[1][0]<<" "<< "|"<<" "<<arr[1][1]<<" " <<"|"<< " "<<arr[1][2]<<" "<<"|" << endl;
	cout << "                                             _____________" << endl;
	cout << "                                             |"<<" "<<arr[2][0]<<" "<< "|"<<" "<<arr[2][1]<<" " <<"|"<< " "<<arr[2][2]<<" "<<"|" << endl;
	cout << "                                             _____________" << endl;
	cout << endl;  
}

void playerA(char arr[3][3])
{
	cout << "PLAYER A TURN:" << endl;
	char A;
	int flag = 0;

	cout << "Enter position to place = ";
	cin >> A;

	while (A < '1' && A > '9')
	{
		cout << "Invalid input!!!" << endl;
		cin >> A;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == A)
			{
				arr[i][j] = 'X';
				flag=1;
			}
		}
	}
	
	while (flag==0)
	{
	cout << "Already used...!!! Again enter position to place = ";
	cin >> A;

	while (A < '1' && A > '9' && flag==0)
	{
		cout << "Invalid input!!!" << endl;
		cin >> A;
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == A)
			{
				flag=1;
				arr[i][j] = 'X';
			}
		}
	}
	}

	display(arr);
}

char findwinner(char arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
		{
			if (arr[i][0] == 'X')
				return 'A';

			else
				return 'B';
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[2][i] == arr[1][i])
		{
			if (arr[0][i] == 'X')
				return 'A';

			else
				return 'B';
		}
	}

	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		if (arr[0][0] == 'X')
			return 'A';

		else
			return 'B';
	}

	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
	{
		if (arr[2][0] == 'X')
			return 'A';

		else
			return 'B';
	}

	return '0';
}

void playerB(char arr[3][3])
{
	cout << "PLAYER B TURN:" << endl;
	char B;
	
	int flag=0;

	cout << "Enter position to place = ";
	cin >> B;

	while (B < '1' && B > '9' && flag==0)
	{
		cout << "Invalid input!!!" << endl;
		cin >> B;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == B)
			{
				flag=1;
				arr[i][j] = 'O';
			}
		}
	}
	
	while (flag==0)
	{
	cout << "Already used...!!! Again enter position to place = ";
	cin >> B;

	while (B < '1' && B > '9' && flag==0)
	{
		cout << "Invalid input!!!" << endl;
		cin >> B;
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == B)
			{
				flag=1;
				arr[i][j] = 'O';
			}
		}
	}
	}

	display(arr);
}

void HowToPlay(char arr[3][3])
{
	cout << endl;

	ofstream fout("HowToPlayTicTacToe.txt");
	cout << "____________________________________________________________________________________________________________" << endl;
	cout << "                                                      HOW TO PLAY                            " << endl;
	cout << "____________________________________________________________________________________________________________" << endl;
	fout << "____________________________________________________________________________________________________________" << endl;
	fout << "                                                      HOW TO PLAY                            " << endl;
	fout << "____________________________________________________________________________________________________________" << endl;
	input_array(arr);
	display(arr);

	fout << endl;
    fout << "                                             _____________" << endl;
	fout << "                                             |"<<" "<<arr[0][0]<<" "<< "|"<<" "<<arr[0][1]<<" " <<"|"<< " "<<arr[0][2]<<" "<<"|" << endl;
	fout << "                                             _____________" << endl;
	fout << "                                             |"<<" "<<arr[1][0]<<" "<< "|"<<" "<<arr[1][1]<<" " <<"|"<< " "<<arr[1][2]<<" "<<"|" << endl;
	fout << "                                             _____________" << endl;
	fout << "                                             |"<<" "<<arr[2][0]<<" "<< "|"<<" "<<arr[2][1]<<" " <<"|"<< " "<<arr[2][2]<<" "<<"|" << endl;
	fout << "                                             _____________" << endl;
	fout << endl;  

	cout << endl;
	cout << "STEPS TO PLAY TIC TAC TOE GAME: " << endl;
	cout << "        1. Game is played on a grid that's 3 squares by 3 squares.." << endl;
	cout << "        2. Game consists of two players .i.e, Player A and Player B." << endl;
	cout << "        3. Player A will be X and Player B will be O." << endl;
	cout << "        4. Players will choose the position between 1 to 9." << endl;
	cout << "        5. Player A with X starts the game." << endl;
	cout << "        6. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner." << endl;
	cout << endl;

	fout << endl;
	fout << "STEPS TO PLAY TIC TAC TOE GAME: " << endl;
	fout << "        1. Game is played on a grid that's 3 squares by 3 squares.." << endl;
	fout << "        2. Game consists of two players .i.e, Player A and Player B." << endl;
	fout << "        3. Player A will be X and Player B will be O." << endl;
	fout << "        4. Players will choose the position between 1 to 9." << endl;
	fout << "        5. Player A with X starts the game." << endl;
	fout << "        6. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner." << endl;
	fout << endl;
	cout << "____________________________________________________________________________________________________________" << endl;
}

void AboutGame()
{
	cout << endl;
	cout << "____________________________________________________________________________________________________________" << endl;
	cout << "                                                 About Game                            " << endl;
	cout << "____________________________________________________________________________________________________________" << endl;
    cout<<endl;
	cout << "C++ is a powerful game engine and this TicTacToe game is designed in C++ compiler." <<endl;
	cout << "Tic-tac-toe is a straightforward two-player game that, if both players play their"<<endl;
	cout << "best, will always end in a tie. This game includes two players, named as Player A"<<endl;
	cout << "and Player B.The player who succeeds in placing three of their marks in a horizontal,"<<endl;
	cout << "vertical, or diagonal row is the winner."<<endl;
	cout << "____________________________________________________________________________________________________________" << endl;
	
}

int getwhattheywant()
{
	char opt;
	cout << endl;
	cout << "Press y to say YES." << endl;
	cout << "Press n to say NO." << endl;
	cout << "RESUME PLAYING...[y/n]:";
	cin >> opt;

	if (opt == 'y' || opt == 'Y')
	{
		return 1;
	}

	if (opt == 'n' || opt == 'N')
	{
		return 0;
	}

	else
	{
		cout << "INVALID INPUT!!!" << endl;
		return -1;
	}
}

void menu()
{
	cout << endl;
    cout << "____________________________________________________________________________________________________________" << endl;
	cout << "                                               MENU:" << endl;
	cout << "                                (Note = Kindly select from following options.)" << endl;
    cout << "____________________________________________________________________________________________________________" << endl;
	cout << "                                     1- Start a new game." << endl;
	cout << "                                     2- How to play?" << endl;
	cout << "                                     3- About game." << endl;
	cout << "                                     4- Exit." << endl;
    cout << "____________________________________________________________________________________________________________" << endl;
}

int option()
{
	menu();
	int opt;
	cout << endl;
	cout << "Enter Your Desired Option:";
	while(!(cin>>opt))
	{
		cout<<"ERROR, Enter Your Desired Option Again: ";
		cin.clear();
		cin.ignore(100, '\n');
	}

	return opt;
}

int main()
{
	cout << "---------------------------------------------TIC TAC TOE GAME-----------------------------------------------" << endl;
	char arr[3][3];
	int opt = option();

	while (opt != 4)
	{
		switch (opt)
		{
		case 1:
		{
			int whattheywant = 1;

			while (whattheywant != 0)
			{
				cout << endl;
				cout << "____________________________________________________________________________________________________________" << endl;
				cout << "-------------------------------------------TIC TAC TOE NEW GAME---------------------------------------------" << endl;
				cout << "____________________________________________________________________________________________________________" << endl;

				input_array(arr);
				display(arr);

				int count = 0;
				char check = '0';

				while (true)
				{
					playerA(arr);
					check = findwinner(arr);
					if (check != '0' || count == 8)
					{
						break;
					}
					count++;
				
					playerB(arr);
					check = findwinner(arr);
					if (check != '0' || count == 8)
					{
						break;
					}
					count++;
				}

				if (check == 'A')
				{
					cout << "***************************************************************************************************" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~PLAYER A WON~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "***************************************************************************************************" << endl;
				}

				else if (check == 'B')
				{
					cout << "***************************************************************************************************" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~PLAYER B WON~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "***************************************************************************************************" << endl;
				}

				else
				{
					cout << "***************************************************************************************************" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!!! GAME DRAW !!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "***************************************************************************************************" << endl;
				}

				whattheywant = getwhattheywant();
				while (whattheywant == -1)
				{
					whattheywant = getwhattheywant();
				}
			}
			cout << "_______________________________________________________________________________________________________" << endl;
			break;
		}

		case 2:
		{
			HowToPlay(arr);
			break;
		}

		case 3:
		{
			AboutGame();
			break;
		}

		default:
		{
			cout << "!!!...Invalid Input...!!!" << endl;
			break;
		}
		}

		opt = option();
	}

	cout<<endl;
	cout << "************************************************************************************************************" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~HOPE YOU ENJOYED~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "************************************************************************************************************" << endl;
    cout << endl;

	cout << endl;
	system("pause");
	return 0;
}
