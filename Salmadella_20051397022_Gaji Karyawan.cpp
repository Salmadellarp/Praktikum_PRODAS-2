#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char namakaryawan[20];
	char pil, gol;
	int jumtotal, jkerja, jlembur;
	int gperjam, glembur,gaji_perminggu;
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN MINGGUAN\n"<<endl;
	cout<<"=========================================\n"<<endl;
	
	
	cout<<"Masukkan Nama Karyawan	:";
	cin>>namakaryawan;
	cout<<"Masukkan Golongan	:";
	cin>>gol;
	cout<<"Masukkan Jam Kerja	:";
	cin>>jkerja;
	cout<<endl;
	
	switch (gol)
	{
		case 'A' :
		{
			gperjam =5000;
			break;
		}
		
		case 'B' :
		{
			gperjam =7000;
			break;
		}
		
		case 'C' :
		{
			gperjam =8000;
			break;
		}
		
		case 'D' :
		{
			gperjam =10000;
			break;
		}
	}
			
		if (jkerja>48)
		{
			jlembur = jkerja - 48;
			gaji_perminggu = gperjam*48;
			glembur = jlembur*4000;
			jumtotal = gaji_perminggu + glembur;
		}
		else if (jkerja<=48)
		{
			jlembur = 0;
			gaji_perminggu = gperjam*jkerja;
			jumtotal = gaji_perminggu;
		}
		
		
		
		cout<<"----------Program Menghitung Gaji Karyawan Mingguan----------\n";
		cout<<endl;
		
		cout<<"Nama Karyawan	:"<<namakaryawan<<endl;
		cout<<"Golongan	:"<<gol<<endl;
		cout<<"Jam Kerja	:"<<jkerja<<endl;
		cout<<"Jam Lembur	:"<<jlembur<<endl;
		cout<<"Gaji Mingguan	:"<<gaji_perminggu<<endl;
		cout<<"Gaji Lembur	:"<<glembur<<endl;
		cout<<"Total Gaji	:"<<jumtotal<<endl;
		
		
		
		
		cout<<"-----------------------Terima Kasih--------------------------\n";
		cout<<endl;
		
	getch();
	return 0;
}
