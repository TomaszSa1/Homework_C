#include <iostream>

int main(){
	int A[5];
	int i;
	for(i=0;i<5;i++){
		A[i] = 2*i+1;
		std::cout << A[i] << " ";
	}
	return 0;
}
