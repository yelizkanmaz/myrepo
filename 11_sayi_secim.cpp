#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2,secim;
    printf("Birinci say�y� giriniz  :");
    scanf("%d",& sayi1);
     printf("�kinci say�y� giriniz  :");
    scanf("%d",& sayi2);
     printf("1-Toplama \n");
     printf("2-��karma \n");
     printf("Se�iminizi giriniz  :");
     scanf("%d",& secim);
     if(secim==1)
     printf("%d",sayi1+sayi2);
     else if(secim==2)
     printf("%d",sayi1-sayi2);
     else
     printf("yanl�� se�im");
     
		
    	
    	
    
	
    getch();
	
}
