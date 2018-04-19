//main function for figgures project

#include <stdio.h>
#include "output.h"		//header file containing all prototypes and definitions


/* main function, starts with clearing screen.
while loop runs menu. if statements offer user to choose between diffrent objects.
else statment stopps program if any other key than offered ones is given*/

void main(void)
{
int choice;
clearScreen();		//clears screen when program starts
	while(1)
	{
		choice=menu();		//choice is taken from menu function

		if(choice == 1)
		{
			clearScreen();
			triangle();
		}
		else if(choice == 2)
		{
			clearScreen();
			circle();
		}
		else if(choice == 3)
		{
			clearScreen();
			rectangle();
		}
		else if(choice == 4)
		{
			clearScreen();
			square();
		}
		else if(choice == 5)
		{
			clearScreen();
			horizontal_line();
		}
		else if(choice == 6)
		{
			clearScreen();
			intersecting_lines();
		}
		else break;

	}
}
