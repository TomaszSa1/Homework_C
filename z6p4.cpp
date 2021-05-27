#include <iostream>

int main(){
	int n;
	int k;
	do{
	std::cout <<"Podaj liczbe od 0 do 20" << std::endl;
	std::cin >> n;
	} while(n>20 || n<0);
	int * Tab = new int[n];
	int * Mod3 = new int[n];
	for(int i=0; i<n; i++){
		std::cin >> k;
		Tab[i]=k;
		Mod3[i]=Tab[i]%3;
	}
	for(int i=0;i<n;i++)
		std::cout << std::endl << Tab[i] << " ";
	std::cout << std::endl << "Reszta z dzielenia przez 3:";
	for(int i=0;i<n;i++)
		std::cout << std::endl << Mod3[i] << " ";
	delete [] Tab;
	delete [] Mod3;
	return 0;
}
