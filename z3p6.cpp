#include <iostream>
   
   int main(){
   	int a,b;
   	std::cin >> a;
   	if(a==0 || a==1){
   		std::cout << "To nie jest liczba pierwsza";
   		return 2;
	   }
   	for(b=a-1;b>1;b--)
   		if(a%b==0){
   			std::cout << "To nie jest liczba pierwsza";
   			return 0;
		   }
	std::cout << "To liczba pierwsza";
	return 1;
   }
   //sprawdzamy ka¿d¹ liczbê mniejsz¹ od zadanej i jeœli ¿adna liczba do 1 nie jest dzielnikiem to dana liczba jest liczb¹ pierwsz¹
