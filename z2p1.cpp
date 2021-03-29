#include <iostream>

int main(){
	   float x;
	   std::cin >> x;
	   if(x>0)
	   		std::cout << x <<" jest dodatnie";
	   	else if(x<0)
	   		std::cout << x <<" jest ujemne";
	   	else
	   		std:: cout << x;
	return 0;
}
