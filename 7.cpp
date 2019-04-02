#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main ()
{
int pilihan;
double nilai1,nilai2,hasil;
float a,b;
cout<<" Kalkulator "<<endl;
cout<<" Pilih operasi yang di ingin kan "<<endl;
cout<<"1. kali"<<endl;
cout<<"2. bagi"<<endl;
cout<<" Masukan pilihan anda !";
cin>>pilihan;

switch(pilihan){
case 1:
cout<<"Masukan nilai : ";
cin>>nilai1;
cout<<" Masukan nilai : ";
cin>>nilai2;
hasil=nilai1*nilai2;
cout<<" Hasil Perkalian = "<<hasil;
break;
case 2:
cout<<"Masukan nilai : ";
cin>>nilai1;
cout<<" Masukan nilai : ";
cin>>nilai2;
hasil=nilai1/nilai2;
cout<<" Hasil Pembagian : "<<hasil;
break;

default:
cout<<"selesa";
}
getch ();
}
