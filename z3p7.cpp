#include <iostream>
   
   int main(){
   	int a,b,c,flag;
   	std::cin >> a;
	for(b=2;a>0;b++){
		for(c=b-1;c>1;c--) {
			if(b%c==0)  {flag = 1; break;}
			else flag = 0; }
	if(flag==0) {
	std::cout << std::endl << b;	
	a--;}
	}
   	return 0;
   }      
   //sprawdzamy liczby od 2, je¿eli przy pierwszym dzielniku wiemy ¿e liczba nie jest pierwsza to przerywamy sprawdzanie i
   //sprawdzamy kolejn¹, je¿eli jest to flaga jest ustawiona na 0, dziêki czemu spe³niony jest warunek do zostania
   //wyœwietlon¹ przy czym licznik "a" jest zmniejszany
