//function to draw square
#include <stdio.h>
#include "output.h"		//header

//basic function to draw square when selected in menu.
//contains color and screen positioning

void square(void)
{
	setColor(RED);		//sets color to red
	gotoxy(4, 70);		//sets screen position
	printf("     _ _ _ _ _ _    \n");	//figure
	gotoxy(5, 70);
	printf("    |           |   \n");
	gotoxy(6, 70);
	printf("    |           |   \n");
	gotoxy(7, 70);
	printf("    |           |   \n");
	gotoxy(8, 70);
	printf("    |           |   \n");
	gotoxy(9, 70);
	printf("    |           |   \n");
	gotoxy(10, 70);
	printf("    |_ _ _ _ _ _|   \n");
}
