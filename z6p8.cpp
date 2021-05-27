#include <iostream>
#include <cstdlib> 
#include <ctime>

int main(){
	int n;
	int temp;
	int *p;
	p = &temp;
	srand((unsigned)time(0));     
	std::cin >> n;
	int * A = new int[n];
	for(int i=0;i<n;i++){
		A[i]= (rand()%11)+0; 
		std::cout << std::endl << A[i] << " ";
	}
	for(int i=0;i<n/2;i++){
		*p=A[i];
		A[i]=A[n-1-i];
		A[n-1-i]=*p;
	}
	std::cout << std::endl;
	for(int i=0;i<n;i++) 
		std::cout << std::endl << A[i] << " ";	
	delete [] A;
	return 0;
}
