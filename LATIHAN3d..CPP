#include<iostream.h>
#include<conio.h>
main()
{
	int a,x,y,b,c,d,e,f,g,h,i,j;
	cout<<"\n\nOPERATOR BORLAND C++"<<endl;
	cout<<"\t===================="<<endl;
	cout<<"masukan nilai X=";cin>>x;
	cout<<"masukan nilai Y=";cin>>y;
	a=(x+y);
	b=(x%y);
	c=(x*y);
	d=(x/y);
	e=(a<b);
	f=(c!=d);
	g=(b!=d);
	h=(a>b)&&(d<=c);
	i=(a>b)&&(d>c);
	j=(a>b)||(d>c);
	clrscr();
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	cout<<"C="<<c<<endl;
	cout<<"D="<<d<<endl;
	cout<<"E="<<e<<endl;
	cout<<"F="<<f<<endl;
	cout<<"G="<<g<<endl;
	cout<<"H="<<h<<endl;
	cout<<"I="<<i<<endl;
	cout<<"J="<<j<<endl;
   
	getch();
}
