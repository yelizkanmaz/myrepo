#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2,sayi3,sayi4,sayi5,enB;
   printf("1.say�y� girin   :");
   scanf("%d",&sayi1);
   printf("2.say�y� girin   :");
   scanf("%d",&sayi2);
   printf("3.say�y� girin   :");
   scanf("%d",&sayi3);
   printf("4.say�y� girin   :");
   scanf("%d",&sayi4);
   printf("5.say�y� girin   :");
   scanf("%d",&sayi5);
   
   enB=sayi1;
   if(sayi2>enB)
   enB=sayi2;
   if(sayi3>enB)
   enB=sayi3;
   if(sayi4>enB)
   enB=sayi4;
   if(sayi5>enB)
   enB=sayi5;
	
	printf("Girdi�iniz say�lardan en b�y��� : %d",enB);
    getch();
	
}
