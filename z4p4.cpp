#include <cstdlib> 
#include <ctime>
#include <iostream>

int main(){
	int B[12];
	int i;
	srand((unsigned)time(0));
	for(i=0;i<12;i++){
		B[i] = (rand()%10)+1;
		std::cout << B[i] << " ";
	}
	return 0;
}
