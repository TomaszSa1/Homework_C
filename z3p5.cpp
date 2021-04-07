#include <iostream>
   
   int main(){
   	int a,b,c,d;
   	std::cin >> a >> b;
   	for(c=1;c>0;c++){
   		d=c*a;
   		if(d%b==0){
		    std::cout << "NWW = " << d;
		    return 0;
		}
	   }	
   }
   //mno¿ymy pierwsz¹ z liczb (a) o c++ od c=1 a¿ dostaniemy liczbê ktora daje resztê 0 po podzieleniu przez drug¹ liczbê (b)
