#include <iostream>
#include <cstdlib> 
#include <ctime>

int main(){
	int n;
	srand((unsigned)time(0));     
	std::cin >> n;
	int * A = new int[n];
	for(int i=0;i<n;i++){
		A[i]= (rand()%11)+0; 
		std::cout << std::endl << A[i] << " ";
	}
	delete [] A;
	return 0;
}
