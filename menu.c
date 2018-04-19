//this function will display menu with object selection options
#include "output.h"			//header
#define ye "\033[01;33m"	//defining yellow color for menu
#define cy "\033[22;36m"	//defining cyan color for menu
#define gr "\033[22;32m"	//defining green color for menu
#define rt "\033[0m"		//defining reset colors on end of each line


int menu(void)
{
int choice;
gotoxy(1,1);	//sets position for menu

	//menu seen by user with selection

	printf(gr"-------------------------------------------------------------\n"rt);
	printf(gr"|           "ye"SELECTION OPTION FOR FIGGURES"rt"                   "gr"|\n"rt);
	printf(gr"|                                                           |\n"rt);
	printf(gr"|                                                           |\n"rt);
	printf(gr"|                                                           |\n"rt);
	printf(gr"|   "cy"1. Triangle               "rt"                          "gr"    |\n"rt);
	printf(gr"|   "cy"2. Circle                 "rt"                          "gr"    |\n"rt);
	printf(gr"|   "cy"3. Rectangle              "rt"                          "gr"    |\n"rt);
	printf(gr"|   "cy"4. Square                 "rt"                          "gr"    |\n"rt);
	printf(gr"|   "cy"5. Horizontal line        "rt"                          "gr"    |\n"rt);
	printf(gr"|   "cy"6. Intersecting lines     "rt"                          "gr"    |\n"rt);
	printf(gr"|                                                           |\n"rt);
	printf(gr"|              select any other button to exit              |\n"rt);
	printf(gr"|                                                           |\n"rt);
	printf(gr"-------------------------------------------------------------\n"rt);
	printf("Select: ");
	scanf("%d", &choice);	//takes user input
	return choice;			//returns choice
}
