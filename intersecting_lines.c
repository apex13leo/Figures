//function to draw intersecting lines

#include <stdio.h>
#include "output.h"		//header

//basic function to draw intesecting lines
//contains color and screen positioning


void intersecting_lines(void)
{
	setColor(RED);					//sets color to red
	gotoxy(4 ,70);					//sets screen position
	printf("   \\      /    \n");	//figure
	gotoxy(5 ,70);
	printf("    \\    /     \n");
	gotoxy(6 ,70);
	printf("     \\  /      \n");
	gotoxy(7 ,70);
	printf("      \\/       \n");
	gotoxy(8 ,70);
	printf("      /\\      \n");
	gotoxy(9 ,70);
	printf("     /  \\     \n");
	gotoxy(10 ,70);
	printf("    /    \\    \n");
	gotoxy(11 ,70);
	printf("   /      \\   \n");

}
