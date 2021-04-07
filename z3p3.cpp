#include <iostream>
   
   int main(){
   	int a,b;
   	std::cin >> a;
	for(b=a;b>0;b--)
		if(a%b==0)
		std::cout << std::endl << b;
   	return 0;
   }
