#include <iostream>
#include <cstdlib> 
#include <ctime>

int main(){
	int n;
	int k=0;
	int *p;
	p = &k;
	srand((unsigned)time(0));     
	std::cin >> n;
	int * A = new int[n];
	for(int i=0;i<n;i++){
		A[i]= (rand()%11)+0; 
		std::cout << std::endl << A[i] << " ";
		if(A[i]%2==0) (*p)++;
	}
	std::cout << std::endl << std::endl << *p;
	delete [] A;
	return 0;
}
