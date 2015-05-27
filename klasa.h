class obiekt{

public:

//mezczyzne oznacza liczba 3
//kobiete oznacza liczba 2


int plec; //p³eæ "osobnika", pole przechowuje ta informacje

int adres[2]; //adres[0] oœ X, adres[1] to oœ Y

obiekt(int a=2){	//konstruktor

adres[0]=rand()%20;	//losowanie wpsolrzednej X
adres[1]=rand()%20;	//losowanie wpsolrzednej Y

plec=a;

}

friend ruch(obiekt a);	   //metoda losujaca przmieszcze
}








