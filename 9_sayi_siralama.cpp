#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2;
    printf("Birinci say�y� girin  :");
    scanf("%d",&sayi1);
    printf("�kinci say�y� girin  :");
    scanf("%d",&sayi2);
    if(sayi1 > sayi2)
	{
    	printf("birinci say� ikinci say�dan b�y�kt�r");
	}
	else if(sayi2 > sayi1)
	{
		printf("ikinci say� birinci say�dan b�y�kt�r");

	}
	else
	{
		printf("Say�lar e�ittir.");
	}

	
    getch();
	
}
