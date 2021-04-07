#include <cstdlib> 
#include <ctime>
#include <iostream>
   
   int main(){
   	int a,b,c;
   	srand((unsigned)time(0));
   	b = (rand()%100)+0;          
   	for(c=1;c<11;c++){
   		std::cout << std::endl << std::endl;
   		std::cin >> a;
   		if(a<b)	std::cout << std::endl << a << " jest mniejsze";
   		if(a>b) std::cout << std::endl << a << " jest wieksze" ;
   		if(a==b) {std::cout << std::endl << "BINGO!" << std::endl << "Runda " << c; return 1;}}
   	std::cout << std::endl << "Przegrana, szukana liczba to " << b;
   	return 0;
   }

