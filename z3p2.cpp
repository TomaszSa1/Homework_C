#include <iostream>
   
   int main(){
   	int n,i,k = 1;
   	std::cin >> n;
   	if(n==0) std::cout << "0! = 1";
   	else
   		for(i=n;i>0;i--)
   			k = k*i;
   	if(n>=1)	std::cout << n << "! = " << k;
   	return 0;
   }
