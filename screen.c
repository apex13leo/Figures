#include "output.h"

/*

	Function definition of clearScreen()
	This function will use VT100 escape sequence "\ESC[2J" to erase the total terminal screen
	input argument: none
	return argument: none
*/

	void clearScreen(void)
	{
		printf("%c[2J", ESC);
		fflush(stdout);
	}

/*
	Function definition of gotoxy()
	This function uses VT100 escape sequence "\ESC[row;coIH" to set the cursor to the
	specific location of the terminal screen
	input argument:
	int row: row number (1 is top)
	int col_ col number (1 is left)
	return argument: none
*/

	void gotoxy(int row, int col)
	{
	printf("%c[%d;%dH", ESC, row, col);
	fflush(stdout);
	}

/*
	Function definition of setColor()
	This function will use VT100 escape sequence "\ESC[1;m" to define colors of elements
	input argument: int color
	return argument: none
*/

	void setColor(int color)
	{
	printf("%c[1;%dm",ESC, color);
	fflush(stdout);
	}
