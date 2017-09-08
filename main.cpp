#include "snake.h"

int main()
{
	int i = 0;
	char selection; //selection variable
	double diff = 0.5; //Mid difficulty

	while (i >= 0)
	{
		if (i > 0)
		{
			cout << "" << endl;
			cout << "Do you want to play again ? [y/n]   ";
			cin >> selection;
			selection = tolower(selection);
			if (selection == 'y')
			{
				system("cls"); //clearing screen
				goto start;
			}
			else goto quit;
		}
	start: //starting program
		{
			menu(); //showing menu screen
		}
		cin >> selection; //selections for playing,options and exit
		if (selection == '1')
		{
			system("cls"); //clears screen
			player_selection(diff); //calling game function, starting game
			goto start;
			i = 1;
		}
		else if (selection == '2')
		{
			options(diff);
			system("cls"); //clearing screen
			goto start;
			i = 1;
		}
		else if (selection == '3') goto quit;
		else
		{
			system("cls"); //clearing screen
			i = 1;
			goto start;
		}
	}
	quit: //quits program
		{
			cout << "Exiting the game....\n"
				 << "THANKS FOR PLAYING!!!!" << endl;
			system("exit");
		}
		return 0;
}