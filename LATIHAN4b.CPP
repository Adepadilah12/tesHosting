#include<conio.h>
#include<iostream.h>
main()
{
int tobel, pot=0, jumbay=0;
cout<<"Total Pembelian Rp. "; cin>>tobel;
if (tobel >= 50000)
pot = 0.2 * tobel;
else
pot = 0.05 * tobel;
cout<<"Besarnya Potongan Rp. "<<pot<<endl;
jumbay = tobel - pot;
cout<<"Jumlah yang harus dibayarkan Rp. "<<jumbay;
getch();
}