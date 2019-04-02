#include <iostream>
using namespace std;
int main ()
{
  struct orang
  { 
    char nama[10];
    int NIM;
    int IPK;
  };
  orang org[2];
  int i;
  for(i=0; i<2; i++)
  {
    cout<<"Nama : ";
    cin>>org[i].nama;
    cout<<"NIM : ";
    cin>>org[i].NIM;
    cout<<"IPK : ";
    cin>>org[i].IPK;
    cout<<endl;
  }
  for (i=0; i<2; i++)
  {
    cout<<"Nama : "<<org[i].nama<<endl;
    cout<<"NIM  : "<<org[i].NIM<<endl;
    cout<<"IPK  : "<<org[i].IPK<<endl;
  }return 0;
}
