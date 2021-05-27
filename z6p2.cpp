#include <iostream>

int main(){
	int n;
	int k;
	do{
	std::cout <<"Podaj liczbe od 0 do 20" << std::endl;
	std::cin >> n;
	} while(n>20 || n<0);
	int * Tab = new int[n];
	for(int i=0; i<n; i++){
		std::cin >> k;
		if(k<0) k=0;
		Tab[i]= k;
	}
	for(int i=0;i<n;i++)
		std::cout << std::endl << Tab[i] << " ";
	delete [] Tab;
	return 0;
}
