#include<iostream.h>
#include<conio.h>

main()
{
a:
char nama[30],ttl[30],jeniskelamin[50],alamat[50];
cout<<"\t\t\t\t\ISI BIODATA ANDA\n";
cout<<"\b";
cout<<"Nama \t\t\t : ";
cin.getline(nama,50);
cout<<"Tempat,Tanggal,Lahir\t : ";
cin.getline(ttl,50);
cout<<"Jenis Kelamin\t\t : ";
cin.getline(jeniskelamin,50);
cout<<"alamat : ";
cin.getline(alamat,50);

cout<<endl;
cout<<"Data Anda"<<endl;
cout<<"_________________________________________"<<endl;

cout<<"Nama	  		  :	"<<nama<<endl;
cout<<"Tempat,Tanggal,Lahir 	 :	"<<alamat<<endl;
cout<<"Jenis Kelamin		 :	"<<alamat<<endl;
cout<<"Alamat			  :	 "<<alamat<<endl;
getch();
goto a;
return 0 ;

}