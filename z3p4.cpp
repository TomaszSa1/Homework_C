#include <iostream>
   
   int main(){
   	int a,b,c,d;
   	std::cin >> a >> b;
   	for(c=a;c>0;c--)            //od najwiêkszego do najmniejszego dzielnika a
	   if(a%c==0)               
   		for(d=b;d>0;d--)           //od najwiêkszego 
   			if(b%d==0 && c==d){     //dzielnika i wspólne dla obu
   				std::cout <<std::endl << "NWD = " << c;
   				return 0;}
   }
