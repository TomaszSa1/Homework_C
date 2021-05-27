#include <iostream>

int main(){
	int n;
	do{
	std::cout <<"Podaj liczbe od 0 do 20" << std::endl;
	std::cin >> n;
	} while(n>20 || n<0);
	int * Tab = new int[n];
	int *a;
	a=Tab;
	*a=1;
	for(int i=1; i<n; i++){
		*(a+i)=*(a+i-1)*2;
	}
	for(int i=0;i<n;i++)
		std::cout << std::endl << Tab[i] << " ";
	delete [] Tab;
	return 0;
}
