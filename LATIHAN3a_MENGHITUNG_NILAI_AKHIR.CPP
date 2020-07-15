#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main(){

 char nama[80];
 int nk, nt, nu;
 float na, nmk, nmt, nmu;

 a:
 clrscr();
 cout<<"---------------------------------------------------------------------"<<endl;
 cout<<">>>>>>>>>>>>>>>>>>>>ProgramMenghitung Nilai Akhir<<<<<<<<<<<<<<<<<<<<"<<endl;
 cout<<"---------------------------------------------------------------------"<<endl<<endl;
 cout<<" Nama Siswa            : ";
 gets(nama);

 cout<<" Nilai Keaktifan       : ";cin>>nk;
 cout<<" Nilai Tugas           : ";cin>>nt;
 cout<<" Nilai Ujian           : ";cin>>nu;

 nmk = 20 * nk /(float)100;
 nmt = 30 * nt /(float)100;
 nmu = 50 * nu /(float)100;
 na = nmk + nmt + nmu;


 cout<<" Siswa yang bernama "<<nama<<endl;
 cout<<" Dengan nilai yang dipresentasikan."<<endl;
 cout<<" Nilai Murni Keaktifan : "<<nmk<<endl;
 cout<<" Nilai Murni Tugas     : "<<nmt<<endl;
 cout<<" Nilai Murni Ujian     : "<<nmu<<endl<<endl;
 cout<<" Jadi siswa yang bernama "<<nama;
 cout<<" memperoleh nilai akhir sebesar "<<na;
 cout<<" dengan grade ";

 if(na>=80){
 cout<<"A";
 }
 else if(na>=70){
 cout<<"B";
 }
 else if(na>=56){
 cout<<"C";
 }
 else if(na=46){
 cout<<"D";
 }
 else{
 cout<<"E";
 }
 cout<<"\n\n";
 cout<<"............................................................";
 cout<<"............................................................"<<endl;

 getch();
 goto a;
 return 0;
}