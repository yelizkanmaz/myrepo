#include <stdio.h>
#include <conio.h>
main()
{
	int adet=7;
	for(int i=0; i<7; i++)
	{
		for(int j=0;j<adet;j++)
		printf("*");
		adet--;
		printf("\n");
	}
	getch();
}
