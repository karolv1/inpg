#include <iostream>
#include "klasa.h"
using namespace std;
int main()
{
obiekt M[10];
obiekt K[10];


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
return 0;
}
