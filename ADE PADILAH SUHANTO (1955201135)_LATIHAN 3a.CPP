 #include <stdio.h>
#include <conio.h>
#include <iostream.h>
 main ()
{
	char x[25];
	float a,b,c,d;
	clrscr();
	cout<<" Masukan Nama Siswa: ";
	cin>>x;
	cout<<" Masukan Nilai Pertandingan 1\t: ";
	cin>>a;
	cout<<" Masukan Nilai Pertandingan 2\t: ";
	cin>>b;
	cout<<" Masukan Nilai Pertandingan 3\t: ";
	cin>>c;
	d = ((a*30/100)+(b*30/100)+(c*40/100));
	clrscr();
	cout<<" Nama Siswa\t : "<<x<<endl;
	cout<<" Pertandingan 1\t = "<<a<<endl;
	cout<<" Pertandingan 2\t = "<<b<<endl;
	cout<<" Pertandingan 3\t = "<<c<<endl;
	cout<<"Nilai Rata Rata Siswa  = "<<d<<endl;
	cout<<"By<ADE_PADILAH_SUHANTO_(19552011350)>";

	getch();
}