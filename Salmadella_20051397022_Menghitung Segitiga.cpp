/*Praktikum Minggu 2*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	char menu;
	float alas,tinggi,simir,keliling,luas;
	
	cout<<"PROGRAM MENGHITUNG SEGITIGA SIKU-SIKU\n"<<endl;
	cout<<"=====================================\n"<<endl;
	
	cout<<"Masukkan Alas		:";
	cin>> alas;
	cout<<"Masukkan Tinggi		:";
	cin>> tinggi;
	
	cout<<"Masukkan Menu Segitiga Siku-Siku	:";
	cin>>menu;
	cout<<endl;
	
	
	switch (menu)
	{
		case '1'	:
		{
			cout<<"Panjang Sisi Miring :";
			simir = sqrt(alas*alas + tinggi*tinggi);
			cout<<simir;
			break;
		}
		
		case '2'	:
		{
			cout<<"Luas Segitiga Siku-Siku :";
			luas = 0.5*alas*tinggi;
			cout<<luas;
			break;
		}
		
		case '3'	:
		{
			cout<<"Keliling Segitiga Siku-Siku	:";
			keliling = alas+tinggi+simir;
			cout<<keliling;
			break;
		}
		
		case '4'	:
		{
			cout<<"--------------------Terima Kasih Telah Menggunakan Program Ini--------------------";
			break;
		}
	}
	
	return 0;
}
