#include<iostream>
using namespace std;
int sprawdz(obiekt o1,obiekt o2)
{
    //komentarz//
	int test;
	if(o1.(adres[0])==o2.adres[0]&&o1.(adres[1])==o2.(adres[1]))
	{
		test=(o1.plec)*(o2.plec);
		if(test==6)
		{
			return 1;
		}
	}
	return 0;
}
