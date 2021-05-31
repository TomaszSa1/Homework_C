#include <iostream>

long long Sil2(long long n){
	if(n==1 || n==0) return 1;
	else if(n>1) return n*Sil2(n-2);
}

int main(){
	long long n;
	std::cin >> n;
	std::cout << std::endl << Sil2(n);
	return 0;
}
