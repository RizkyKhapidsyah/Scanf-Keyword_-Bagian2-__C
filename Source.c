#include <stdio.h>
#include <conio.h>

int main()
{
	char name[15];		/* room for 14 characters */

	printf("Your name? ");
	scanf_s("%s",name);
	printf("You are %s.\n",name);

	_getch();
	return(0);
}