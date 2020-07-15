#include<stdio.h>
#include<conio.h>
 main()
{
	int luas, panjang, lebar = 0;

   printf("Masukkan panjang =");
   scanf("%d",&panjang);

   printf("Masukkan lebar =");
   scanf("%d",&lebar);

	luas = panjang * lebar;

	printf("luas persegi panjang = %d",luas);

   getch();
}