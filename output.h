//definitions and prototypes
#include <stdio.h>
#define ESC 0x1B
enum FGCOLORS {BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};		//color definitions

int menu(void);					//menu() function prototype
void triangle(void);			//prototype for triangle() function
void circle(void);				//prototype for circle() function
void rectangle(void);			//prototype for rectangle() function
void square(void);				//prototype for square() function
void horizontal_line(void);		//prototype for horizontal_line() function
void intersecting_lines(void);	//prototype for intersecting_lines() function
void clearScreen(void);			//prototype for clearScreen() function
void gotoxy(int , int);			//prototype for gotoxy() function
void setColor(int);				//prototype for setColor() function
