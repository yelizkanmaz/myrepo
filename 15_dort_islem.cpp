#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    int sayi1,sayi2,secim;
    printf("Birinci say�s� giriniz :");
    scanf("%d",&sayi1);
    printf("�kinci say�s� giriniz :");
    scanf("%d",&sayi2);
    printf("***MEN�***\n");
    printf("[1] TOPLAMA\n");
    printf("[2] �IKARMA\n");
    printf("[3] �ARPMA\n");
    printf("[4] B�LME\n");
    printf("Se�iminiz : ");
    scanf("%d",&secim);
       
    
    switch(secim)
	{
   		 case 1:
    		printf("toplam = %d",sayi1+sayi2);
			break;
   		 case 2:
    		printf("fark  =%d",sayi1-sayi2);
			break;
   		 case 3:
    		printf("�arp�m  =%d",sayi1*sayi2);
			break;
   		 case 4:
    		printf("b�l�m  =%d",sayi1/sayi2);
			break;
   		 default:
    		printf("hatal� se�im yapt�n�z");
    		break;
	}
	
    
	
    getch();
	
}
