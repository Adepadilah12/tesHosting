#include<stdio.h>
#include<conio.h>
main()
{
	char nm1[20];
	char nm2[20];
   puts("Masukkan nama ke-1 =");gets(nm1);
	printf("Masukkan nama ke-2 = ");scanf("%s", &nm2);
	printf("\n\n");
	puts("Nama ke-1 =");
	puts(nm1);
	printf("Nama ke-2 = %s", nm2);

	getch();
}