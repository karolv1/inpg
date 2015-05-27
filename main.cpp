#include <iostream>
#include "klasa.h"
#include "spraw.cpp"
using namespace std;
int main()
{
obiekt M[10];
obiekt K[10];
char k='t';
while(k='t'){
int wynik;
for(i=0;i<10;i++)
{
 for(j=0;j<10;j++)
{
wynik = sprawdz(M[i],K[j]);
if (wynik==1)
{
    cout<<"Randka na polu"<<M[i].adres[0]<<" "<<M[i].adres[1]<<endl;
}
}
}
cout << "Wcisnij t aby nowe pokolenie."<<endl;
cin>>k;
}
return 0;
}
