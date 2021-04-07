#include <iostream>
   
	int main(){
   	int f1 = 0;
	int f2 = 1;
	int fn;
	int n,i;
	std::cin >> n ;
	if(n>0)	std::cout << std::endl << f1;
	if(n>1)    std::cout << std::endl << f2;
	for(i=2;i<n;i++){
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		std::cout << std::endl << fn ;
	}
   	return 0;
   }
