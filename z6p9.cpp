#include <iostream>
#include <cstdlib> 
#include <ctime>

int main(){
	int n,m;
	int temp;
	int *p;
	p = &temp;
	srand((unsigned)time(0));     
	std::cin >> n;
	std::cout << std::endl << std::endl;
	int * A = new int[n];
	for(int i=0;i<n;i++){
		A[i]= (rand()%11)+0; 
		std::cout  << A[i] << " ";
	}
	std::cout << std::endl << std::endl;
	std::cin >> m;
	for(int i=0;i<(m%n);i++){
		for(int j=0;j<n-1;j++){
			*p=A[(j+1)%n];
			A[(j+1)%n]=A[j];
			A[j]=*p;		
		}
	}
	std::cout << std::endl;
	for(int i=0;i<n;i++) 
		std::cout  << A[i] << " ";
	std::cout << std::endl;	
	delete [] A;
	return 0;
}
