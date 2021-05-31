#include <iostream>

long long Sil2(int n){
	long long k=1;
	if(n==1 || n==0) return 1;
	else if(n>1){
		for(long long i=n;i>0;i-=2){
			k*=i;
		}
	} 
	return k;
}

int main(){
	long long n;
	std::cin >> n;
	std::cout << std::endl << Sil2(n);
	return 0;
}
