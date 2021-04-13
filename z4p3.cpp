#include <iostream>

int main(){
	int A[5];
	int A2[5];
	int i,j,n, temp;
	for(i=0;i<5;i++){
		A[i] = 2*i+1;
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	std::cin >> n;
	for(i=0;i<5;i++){
		A2[(i+n)%5] = A[i];                    //element pierwszej tablicy jest przenoszony do nowej tablicy na wyznaczon¹ pozycjê
	}                                          // aby zachowaæ cyklicznoœæ zastosowane zosta³o modulo (5 bo tyle elementów w tablicy)
	for(i=0;i<5;i++)
		A[i] = A2[i];
	std::cout << std::endl;
	for(i=0;i<5;i++)
		std::cout << A[i] << " ";
	return 0;
}
