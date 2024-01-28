#include<iostream>
#include<unistd.h>

using namespace std;
//version 1.0
//Player Oyuncularin ismini Kaydediyor.
class Player
{

public:
string player1, player2;

  void setplayer ()
  {
    string arr1[4] = { "To", "Start", "The", "Game" };
    cout << endl << endl;

    for (int x = 0; x < 4; x++)
      {
	cout << arr1[x] << " " << flush;
	usleep (140000);
      }
    cout << endl;
    string arr2[5] = { "Please", "enter", "the", "first", "player:" };
    for (int x = 0; x < 5; x++)
      {
	cout << arr2[x] << " " << flush;
	usleep (140000);
      }
    cin >> player1;
    string arr3[5] = { "Please", "enter", "the", "second", "player:" };
    for (int x = 0; x < 5; x++)
      {
	cout << arr3[x] << " " << flush;
	usleep (140000);
      }
    cin >> player2;

  }
};


class ui:public Player
{


public:

  int row, column;
  int count = 0, endgame = 0;
  char continuetogame = 'y';






  void firstscreen ()
  {
    system ("clear");
    cout << "---------               *             _________" << endl;
    cout << "    |                   |             |        " << endl;
    cout << "    |                   |             |        " << endl;
    cout << "    |                   |             |        " << endl;
    cout << "    |                   |             |________" << endl;
    cout << "_______________________________________________" << endl;
    cout << "---------            ________         _________" << endl;
    cout << "    |               |        |        |        " << endl;
    cout << "    |               |________|        |        " << endl;
    cout << "    |               |        |        |        " << endl;
    cout << "    |               |        |        |________" << endl;
    cout << "_______________________________________________" << endl;
    cout << "---------            ________         ---------" << endl;
    cout << "    |               |        |        |        " << endl;
    cout << "    |               |        |        |----    " << endl;
    cout << "    |               |        |        |        " << endl;
    cout << "    |               |________|        ----------" << endl;




  }



  void mainscreen ()
  {
    char arr[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

    do
      {


	system ("clear");
	cout << "          |               |           " << endl;
	cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	cout << "          |               |           " << endl;
	cout << "--------------------------------------" << endl;
	cout << "          |               |           " << endl;
	cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	cout << "          |               |           " << endl;
	cout << "--------------------------------------" << endl;
	cout << "          |               |           " << endl;
	cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	cout << "          |               |           " << endl << endl;


	count++;
	count = count % 2;

	if (count == 0)
	  {

	    cout << player2 << "'s turn" << endl;
	    cout << "Please enter the row and column to change the value" <<
	      endl;
	    cout << "Row: ";
	    char rowInput;
	    cin >> rowInput;
	    int row = 0;
	    if (isdigit (rowInput))
	      {
		row = rowInput - '0';
	      }
	    else
	      {
		system ("clear");

		cout << "Invalid input for row!" << endl;
		sleep (2);
		count--;
		continue;
	      }

	    cout << "Column: ";
	    char columnInput;
	    cin >> columnInput;
	    int column = 0;
	    if (isdigit (columnInput))
	      {
		column = columnInput - '0';
	      }
	    else
	      {
		system ("clear");

		cout << "Invalid input for row!" << endl;
		sleep (2);
		count--;
		continue;
	      }

	    if (row > 0 && row < 4 && column > 0 && column < 4)
	      {
		if (arr[row - 1][column - 1] != 'X'
		    && arr[row - 1][column - 1] != 'O')
		  {
		    arr[row - 1][column - 1] = 'O';
		    endgame++;
		  }
		else if (arr[row - 1][column - 1] == 'O')
		  {
		    system ("clear");

		    cout << endl << endl << endl <<
		      "\tYou already placed there " << flush;
		    sleep (2);
		    count--;
		    system ("clear");

		  }





		else
		  {
		    system ("clear");

		    cout << endl << endl << endl <<
		      "\tYou can not place there" << flush;
		    sleep (2);
		    count--;
		    system ("clear");
		  }
	      }
	    else
	      {
		system ("clear");
		cout << "Numbers you enter must be between 1-3" << flush;
		sleep (2);
		count--;
		system ("clear");
	      }



	  }
	else if (count == 1)
	  {
	    cout << player1 << "'s turn" << endl;
	    cout << "Please enter the row and column to change the value" <<
	      endl;
	    cout << "Row: ";
	    char rowInput;
	    cin >> rowInput;
	    int row = 0;
	    if (isdigit (rowInput))
	      {
		row = rowInput - '0';
	      }
	    else
	      {
		system ("clear");

		cout << "Invalid input for row!" << endl;
		sleep (2);
		count--;
		continue;
	      }

	    cout << "Column: ";
	    char columnInput;
	    cin >> columnInput;
	    int column = 0;
	    if (isdigit (columnInput))
	      {
		column = columnInput - '0';
	      }
	    else
	      {
		system ("clear");

		cout << "Invalid input for row!" << endl;
		sleep (2);
		count--;
		continue;
	      }



	    if (row > 0 && row < 4 && column > 0 && column < 4)
	      {
		if (arr[row - 1][column - 1] != 'O'
		    && arr[row - 1][column - 1] != 'X')
		  {
		    arr[row - 1][column - 1] = 'X';
		    endgame++;
		  }


		else if (arr[row - 1][column - 1] == 'X')
		  {
		    system ("clear");

		    cout << endl << endl << endl <<
		      "\tYou already placed there " << flush;
		    sleep (2);
		    count--;
		    system ("clear");

		  }
		else
		  {
		    system ("clear");

		    cout << endl << endl << endl <<
		      "\tYou can not place there" << flush;
		    sleep (2);
		    count--;
		    system ("clear");
		  }

	      }
		  else
	  {
	    system ("clear");
	    cout << "Numbers you enter must be between 1-3" << flush;
	    sleep (2);
	    count--;
	    system ("clear");
	  }

	  }
	


	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
	  {
	    system ("clear");
	    cout << "          |               |           " << endl;
	    cout << "----" << arr[0][0] << "-----|-------" << arr[0][1] <<"-------|-----" << arr[0][2] << "-----" << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "          |               |           " << endl << endl;


	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }





	  }
	else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
	  {
	    system ("clear");
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "----" << arr[1][0] << "-----|-------" << arr[1][1] << "-------|-----" << arr[1][2] << "-----" << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] << "       |     " << arr[2][2] << endl;
	    cout << "          |               |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
	  {
	    system ("clear");
	    cout << "    |     |               |            " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "    |     |               |            " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "    |     |               |            " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << "     " << endl;
	    cout << "    |     |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "    |     |               |            " << endl;
	    cout << "    " << arr[2][0] << "     |        " << arr[2][1] <<"      |     " << arr[2][2] << endl;
	    cout << "    |     |               |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
	  {
	    system ("clear");
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "----" << arr[2][0] << "-----|-------" << arr[2][1] <<"-------|-----" << arr[2][2] << "-----" << endl;
	    cout << "          |               |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
	  {
	    system ("clear");
	    cout << " \\        |               |           " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "       \\  |               |            " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          | \\             |          " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |            \\  |           " << "          " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               | \\       " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "          |               |         \\ " << endl;
	    cout << "--------------------------------------" << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
	  {
	    system ("clear");
	    cout << "          |               |     |       " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               |     |       " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |     |       " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << "     " << endl;
	    cout << "          |               |     |       " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |     |        " << endl;
	    cout << "    " << arr[2][0] << "     |        " << arr[2][1] <<"      |     " << arr[2][2] << endl;
	    cout << "          |               |     |     " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
	  {
	    system ("clear");
	    cout << "          |               |           " << endl;
	    cout << "----" << arr[0][0] << "-----|-------" << arr[0][1] <<"-------|-----" << arr[0][2] << "-----" << endl;
        cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "          |               |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
	  {
	    system ("clear");
	    cout << "    |     |               |            " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "    |     |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "    |     |               |            " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << "     " << endl;
	    cout << "    |     |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "    |     |               |            " << endl;
	    cout << "    " << arr[2][0] << "     |        " << arr[2][1] <<"      |     " << arr[2][2] << endl;
	    cout << "    |     |               |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }

	else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
	  {
	    system ("clear");
	    cout << "          |       |       |            " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |       |       |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |       |       |            " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << "     " << endl;
	    cout << "          |       |       |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |       |       |            " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "          |       |       |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
	  {
	    system ("clear");
	    cout << "          |       |       |            " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |       |       |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |       |       |            " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << "     " << endl;
	    cout << "          |       |       |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |       |       |            " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "          |       |       |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }

	else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
	  {
	    system ("clear");
	    cout << "          |               |     |       " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               |     |       " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |     |       " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << "     " << endl;
	    cout << "          |               |     |       " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |     |        " << endl;
	    cout << "    " << arr[2][0] << "     |        " << arr[2][1] <<"      |     " << arr[2][2] << endl;
	    cout << "          |               |     |     " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
	  {
	    system ("clear");
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "----" << arr[1][0] << "-----|-------" << arr[1][1] <<"-------|-----" << arr[1][2] << "-----" << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "          |               |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }

	  }
	else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
	  {
	    system ("clear");
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |               |           " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               |           " << endl;
	    cout << "----" << arr[2][0] << "-----|-------" << arr[2][1] <<"-------|-----" << arr[2][2] << "-----" << endl;
	    cout << "          |               |           " << endl << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
	  {
	    system ("clear");
	    system ("clear");
	    cout << " \\        |               |           " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "       \\  |               |            " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          | \\             |          " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |            \\  |           " << "          " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |               | \\       " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "          |               |         \\ " << endl;
	    cout << "--------------------------------------" << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
	  {
	    system ("clear");

	    cout << "          |               |        /  " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               | /          " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |            /  |        " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |  /            |           " << "          " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "        / |               |         " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "/         |               |       " << endl;
	    cout << "--------------------------------------" << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player2 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }
	  }
	else if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
	  {
	    system ("clear");

	    cout << "          |               |        /  " << endl;
	    cout << "    " << arr[0][0] << "     |       " << arr[0][1] <<"       |     " << arr[0][2] << endl;
	    cout << "          |               | /          " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "          |            /  |        " << endl;
	    cout << "    " << arr[1][0] << "     |       " << arr[1][1] <<"       |     " << arr[1][2] << endl;
	    cout << "          |  /            |           " << "          " << endl;
	    cout << "--------------------------------------" << endl;
	    cout << "        / |               |         " << endl;
	    cout << "    " << arr[2][0] << "     |       " << arr[2][1] <<"       |     " << arr[2][2] << endl;
	    cout << "/         |               |       " << endl;
	    cout << "--------------------------------------" << endl;
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "Congratulations " << flush;
	    usleep (200000);
	    cout << player1 << flush;
	    usleep (200000);
	    cout << " WIN!!!" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
		count = 2;
		endgame = 0;
		system ("clear");
	      }




	    else if (continuetogame != 'n' && continuetogame != 'y')
	      {
		system ("clear");
		cout << "Wrong input" << endl;
		cout << "Enter y or n" << endl;
		sleep (2);

		system ("clear");
		cout << "Do you want to play again(y/n)";
		cin >> continuetogame;
		if (continuetogame != 'y')
		  {
		    exit (0);

		  }

		else
		  {

		    for (int x = 0; x < 3; x++)
		      {
			for (int y = 0; y < 3; y++)
			  {
			    arr[x][y] = ' ';
			  }
		      }
		    count = 2;
		    endgame = 0;
		    system ("clear");
		  }
	      }

	  }
	else if (endgame == 9)
	  {
	    system ("clear");
	    for (int x = 0; x < 40; x++)
	      {
		cout << "-" << flush;
		usleep (20000);
	      }
	    cout << ">";
	    usleep (200000);
	    cout << "The " << flush;
	    usleep (200000);
	    cout << "Game is " << flush;
	    usleep (200000);
	    cout << "Draw" << flush;
	    cout << endl << endl;
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
	      }
	    count = 2;
	    endgame = 0;

	  }
	else if (continuetogame != 'n' && continuetogame != 'y')
	  {
	    cout << "Wrong input" << endl;
	    system ("clear");
	    cout << "Do you want to play again(y/n)";
	    cin >> continuetogame;
	    if (continuetogame == 'y')
	      {
		for (int x = 0; x < 3; x++)
		  {
		    for (int y = 0; y < 3; y++)
		      {
			arr[x][y] = ' ';
		      }
		  }
	      }
	    count = 2;
	    endgame = 0;
	  }








      }
    while (continuetogame != 'n');

    cout << "Have a nice day:)" << endl;
  }
};

//GAmeSelection D0lk yC<kleme ekranD1
class GameSelection
{

public:


  void enterscreen ()
  {
    string arr[4] = { "Replars", "Company", " Games", "RS" };

    for (int x = 0; x < 4; x++)
      {
	cout << arr[x] << " " << flush;
	usleep (400000);
    } for (int a = 0; a < 5; a++)
      {
	usleep (100000);
	cout << "\b\\" << flush;
	usleep (100000);
	cout << "\b|" << flush;
	usleep (100000);
	cout << "\b/" << flush;
	usleep (100000);
	cout << "\b-" << flush;
      }
    cout << "\b";
  }
};

int
main ()
{
  GameSelection obj1;
  system ("clear");
  cout << endl << endl << endl;
  cout << "\t";
  obj1.enterscreen ();
  ui game1;
  game1.firstscreen ();
  game1.setplayer ();
  cout << "The Game is Loading";
  for (int x = 0; x < 3; x++)
    {
      cout << "." << flush;
      usleep (140000);
    }
  cout << endl;
  sleep (1);
  string game[5] = { "Tic", "Tac", "Toe", " ", " " };
  for (int x = 0; x < 5; x++)
    {
      cout << game[x] << " " << flush;
      usleep (140000);
    }

  sleep (1);
  game1.mainscreen ();
}
