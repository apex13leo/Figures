//function to draw circle
#include <stdio.h>
#include "output.h"		//header

//Basic function of drawing circle when selected via menu.
//Color is set to red and contains positioning on screen.

void circle(void)
{
	setColor(RED);							//sets color to red
	gotoxy(4, 70);							//set position on screen
	printf("         ***           \n");	//figure
	gotoxy(5, 70);
	printf("      **     **        \n");
	gotoxy(6, 70);
	printf("    **         **      \n");
	gotoxy(7, 70);
	printf("    *           *      \n");
	gotoxy(8, 70);
	printf("    **         **      \n");
	gotoxy(9, 70);
	printf("      **     **        \n");
	gotoxy(10, 70);
	printf("         ***           \n");

}
