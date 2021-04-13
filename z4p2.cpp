#include <iostream>

int main(){
	int A[5];
	int i,j,temp;
	for(i=0;i<5;i++){
		A[i] = 2*i+1;
		std::cout << A[i] << " ";
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){                                 //podmian o jeden mniej ni¿ elementów
			if(A[j] < A[j+1]){
			temp = A[j];
			A[j] = A[j+1];
			A[j+1] = temp;
			}
		}
	}
	std::cout << std::endl;
	for(i=0;i<5;i++)
		std::cout << A[i] << " ";
	return 0;
}
