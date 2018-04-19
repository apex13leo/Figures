//function to draw horizontal line
#include <stdio.h>
#include "output.h"		//header

//basic function to draw horizontal line when selected in menu.
//contains color and screen positioning.

void horizontal_line(void)
{
	setColor(RED);					//sets color to red
	gotoxy(7 , 70);					//sets screen position
	printf(" ---------------- ");	//figure
}
