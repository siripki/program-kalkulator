#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

main ()
 
{

int kode, t;
char jp[25],kkw,x;
int nominal,harga,kw;
float ml,bayar,kembali,sumbangan;
piliht:
cout<<"*****PILIH TEMA*****\n";
cout<<"1.HIJAU\n";
cout<<"2.BIRU\n";
cout<<"3.MERAH\n";
cout<<"PILIH... :";
cin>>t;
system("cls");
if(t=1)
   {
  system("color 02");
   }
else if(t=2)
   {
   system("color 01");
   }
else if(t=3)
   {
   system("color 04");
   }
else
   {
   system("cls");
   cout<<"Maaf kode salah...\n";
   goto piliht;
   //cout<<"PILIH KODE [1/2/3/4/5] :"; cin>>kode;
   }

pilihan:
cout<<"=     PARFUMANIA    ="<<endl;
cout<<"====================="<<endl;
cout<<"Jenis Parfum :"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"1. Bulgaria        |"<<endl;
cout<<"2. J-Lo            |"<<endl;
cout<<"3. Spalding        |"<<endl;
cout<<"4. Woody           |"<<endl;
cout<<"5. Dunhill Blue    |"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
pilihan1:
cout<<"PILIH KODE [1/2/3/4/5] :"; cin>>kode;
if(kode==1)
   {
   strcpy(jp,"Bulgaria");
   }
else if(kode==2)
   {
   strcpy(jp,"J-Lo");
   }
 else if(kode==3)
   {
   strcpy(jp,"Spalding");
   }
else if(kode==4)
   {
   strcpy(jp,"Woody");
   }
else if(kode==5)
   {
   strcpy(jp,"Dunhill Blue");
   }
else
   {
   system("cls");
   cout<<"Maaf kode salah...\n";
   goto pilihan1;
   //cout<<"PILIH KODE [1/2/3/4/5] :"; cin>>kode;
   }
system("cls");

pilihan2:
cout<<"Konsentrasi wangi"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"A. 40% (Rp.1000/ml)|"<<endl;
cout<<"B. 70% (Rp.2000/ml)|"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"PILIH KODE [A/B]       :";cin>>kkw;
cout<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;

if(kkw=='A'||kkw=='a')
   {
   kw=40;
   nominal=1000;
   }
else if(kkw=='B'||kkw=='b')
   {
   kw=70;
   nominal=2000;
   }
else
   {
   system("cls");
   cout<<"Maaf kode salah...\n";
   goto pilihan2;
   //strcpy(jp,"kode salah");
   //cout<<jp;
   //nominal=0;
   //harga=0;
   }

cout<<"Banyaknya/ml :";cin>>ml;
harga=ml*nominal;
system("cls");
cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"Jenis Parfum        :"<<jp<<endl;
cout<<"Konsentrasi Wangi   :"<<kw<<"%"<<endl;
cout<<"Banyaknya/ml        :"<<ml<<"ml"<<endl;
cout<<"HARGA               :Rp."<<harga<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"Bayar               :Rp.";cin>>bayar;
kembali=bayar-harga;
cout<<"Kembali             :Rp."<<kembali<<endl<<endl;
cout<<"            *=TERIMA KASIH=*               :"<<endl<<endl<<endl;

cout<<"KEMBALI KE MENU AWAL [Y/T]:";cin>>x;
if(x=='Y'||x=='y')
{
system("cls");
goto pilihan;
}
else if(x=='T'||x=='t')
getch();
}
