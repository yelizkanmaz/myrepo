#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()
{
	
	setlocale(LC_ALL,"Turkish");
	
//KLAVYEDEN G�R�LEN SAYININ 50 VE 200 ARASINDAK� KA� RAKAMI KALANSIZ B�LD���N� G�STEREN PROGRAM

int sayi=0;
int adet=0;
printf("Say� giriniz : ");
scanf("%d",&sayi);
for(int i=50;i<200;i++)
{
	if(i%sayi==0)
	{
	adet++;
	printf("%d \n",i);
	}
}

printf("%d adet say�y� kalans�z b�ler",adet);
	
	getch();
	

}
