#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    int sayi;
    printf("Bir say� giriniz : ");
    scanf("%d",&sayi);
    printf("Girilen sayi= %d",sayi);
    getch();
    
	
}
