//function to display triangle

#include <stdio.h>
#include "output.h"		//header

//basic function do display triangle when selected in menu.
//contains color and screen positioning.

void triangle(void)
{
	setColor(RED);		//sets color to red
	gotoxy(4, 70);		//sets screen position
	printf("       /\\       \n");	//figure
	gotoxy(5, 70);
	printf("      /  \\      \n");
	gotoxy(6, 70);
	printf("     /    \\     \n");
	gotoxy(7, 70);
	printf("    /      \\    \n");
	gotoxy(8, 70);
	printf("   /        \\   \n");
	gotoxy(9, 70);
	printf("  /          \\  \n");
	gotoxy(10, 70);
	printf(" /_ _ _ _ _ _ \\ \n");
}
