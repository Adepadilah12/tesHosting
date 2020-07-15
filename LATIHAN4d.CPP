#include <conio.h>
#include <stdio.h>
#include <iostream.h>
main()
{
char jns,ukuran,*u,*j;
float hrg,jml,total,kembali,bayar;
clrscr;
cout<<"================================"<<endl;
cout<<" Toko Kaos "<<endl;
cout<<"================================"<<endl;
cout<<" A. Nevada"<<endl;
cout<<" 1. Large"<<endl;
cout<<" 2. Medium"<<endl;
cout<<" 3. Small\n"<<endl;
cout<<" B. Polo"<<endl;
cout<<" 1. Large "<<endl;
cout<<" 2. Medium "<<endl;
cout<<" 3. Small \n"<<endl;
cout<<" C. Poshboy "<<endl;
cout<<" 1. Large"<<endl;
cout<<" 2. Medium"<<endl;
cout<<" 3. Small "<<endl;
cout<<"================================"<<endl;
cout<<" Masukan Merk Baju = ";cin>>jns;
cout<<" Masukan Ukurannya = ";cin>>ukuran;
if (jns=='A' || jns=='a')
{
if (ukuran=='1')

{ hrg=110000; j="NEVADA"; u="Large";}

else if (ukuran=='2')

{ hrg=100000; j="NEVADA "; u="Medium";}

else

{ hrg=95000; j="NEVADA "; u="Small";} }

else if (jns=='B' || jns=='b')
{ if (ukuran=='1')

{ hrg=200000; j="\"POLO"; u=" Large ";}

else if (ukuran=='2')

{ hrg=175000; j=" POLO "; u=" Medium ";}

else
{ hrg=150000; j="POLO"; u="Small";} }

else
{ if (ukuran=='1')

{ hrg=120000; j="POSHBOY"; u="Large";}

else if (ukuran=='2')

{ hrg=115000; j="POSHBOY "; u="Medium";}

else

{ hrg=110000; j="POSHBOY "; u="Small ";} }
cout<<" Merk Kaos = "<<j<<endl;
cout<<" Ukuran = "<<u<<endl;
cout<<" Harga Satuan =Rp. "<<hrg<<endl;
cout<<" Jumlah Beli = ";cin>>jml;
total=jml*hrg;
cout<<" Uang yang dibayar =Rp. "<<total<<endl;
cout<<" Bayar =Rp. ";cin>>bayar;
kembali=bayar-total;
cout<<" Uang Kembali =Rp. "<<kembali<<endl;
getch();
}