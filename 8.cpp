#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
const int Ar[10]={55,53,52,51,30,24,21,15,10,5};
int tar;
cout<<" Masukan data yang dicari"<<endl;
cin>>tar;
int awal=0, akhir=9, tengah;
while (awal<= akhir)
{
tengah=(awal + akhir)/2;
if (tar> Ar[tengah])
{
awal = tengah + 1;
}
else if (tar < Ar[tengah])
{
akhir = tengah - 1;
}
else 
{
awal=akhir + 1;
}
}
if(tar== Ar[tengah])
{
cout<<" Data ditemukan pada index ke "<<tengah+1<<endl;
}else
{
cout<<" Data tidak di temukan "<<endl;
}
getch ();
}
