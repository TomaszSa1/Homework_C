#include <cstdlib> 
#include <ctime>
#include <iostream>

int main(){
	int B[12];
	int i;
	int max = 0;
	srand((unsigned)time(0));
	for(i=0;i<12;i++){
		B[i] = (rand()%10)+1;
		std::cout << B[i] << " ";
		if(max<B[i])
			max = B[i];
	}
	std::cout << std::endl << "Max = " << max;
	return 0;
}
