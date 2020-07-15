#include <iostream>



void TampilArray(char nilai[20], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<nilai[i]<<' ';
    }cout<<endl;
}

int main()
{
    char nilai[20];
    int i,n,j,tmp;

    cout<<" \n ============ Program Insertion Sort ========== "<<endl;
    cout<<" \n Masukkan Banyaknya Elemen Array = "; cin>>n;
    cout<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<" Elemen Array Ke-"<<i<<" : ";cin>>nilai[i];
    }
    cout<<"\n Data Sebelum diurut : ";
    TampilArray(nilai,n);
    for(int i=0; i<n;i++)
    {
        tmp = nilai[i];
        j = i -1;
        while(nilai[j]<tmp && j>=0)
            {
                nilai[j+1] = nilai[j];
                j--;
            }
        nilai[j+1] = tmp;
    }
     cout<<" \n Data Setelah diurut : ";
     TampilArray(nilai,n);

     cout<<" \n ====== ADE PADILAH SUHANTO ====== "<<endl;
     cout<<" \n ====== TEKNIK INFORMATIKA ====== "<<endl;
     cout<<" \n ====== UNIVERSITAS MUHAMMADIYAH TANGERANG ====== "<<endl;
    return 0;
}
