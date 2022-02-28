#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,j,k,baris,kolom,A[25][25],B[25][25],hasil[25][25];
	float jumlah = 0;
	
	cout<<"Perkalian Matriks "<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Jumlah Baris        : "; cin>>baris;
	cout<<"Masukkan Jumlah  Kolom        : "; cin>>kolom;
	cout<<"\n";
	cout<<"Matriks A "<<endl;
	cout<<"\n";
	for (i=0;i<baris;i++)
	{
		for (j=0;j<kolom;j++)
		{
			cout<<"Masukkan elemen matriks (baris,kolom) ["<<i<<","<<j<<"] = "; cin>>A[i][j];
		}
	}
	cout<<"\n";
	cout<<"Matriks B"<<endl;
	cout<<"\n";
	for (i=0;i<baris;i++)
	{
		for (j=0;j<kolom;j++)
		{
			cout<<" Masukkan elemen matriks (baris,kolom) ["<<i<<","<<j<<"] = "; cin>>B[i][j];
		}
	}
	
	for(int i=0; i<baris; i++){
		for(int j=0;j<kolom;j++){
		for (int k=0; k<kolom; k++){
			jumlah= jumlah + A[i][k] * B[k][j];
		}
		hasil[i][j] = jumlah;
		jumlah = 0;
	}
	}
	cout<<"\n";
	cout<<"Hasil Perkalian Matriks A dan B = "<<endl;
	for (i=0;i<baris;i++)
	{
		for (j=0;j<kolom;j++)
		{
			cout<<" "<<hasil[i][j];
		}
		cout<<"\n";
	}
	
	getch();
}
