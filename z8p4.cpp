#include <iostream>

int Fib(int n){
	int tab[n+1];
	if(n==0) return 0;
	if(n==1) return 1;
	tab[0]=0;
	tab[1]=1;
	for(int i=2;i<n+1;i++){
		tab[i]=tab[i-1]+tab[i-2];
	}
	return tab[n];
}

int main(){
	int n;
	std::cin >> n;
	std::cout << std::endl << Fib(n);
	return 0;
}
