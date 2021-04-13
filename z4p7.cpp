#include <cstdlib> 
#include <ctime>
#include <iostream>

int main(){
	int B[12];
	int i,j, temp;
	srand((unsigned)time(0));
	for(i=0;i<12;i++){
		B[i] = (rand()%10)+1;
		std::cout << B[i] << " ";
	}
	for(i=0;i<11;i++){
		for(j=0;j<11;j++){
			if(B[j]>B[j+1]){
			temp = B[j];
			B[j] = B[j+1];
			B[j+1] = temp;
			}
		}
	}
	std::cout << std::endl;
	for(i=0;i<12;i++)
		std::cout << B[i] << " ";	
	return 0;
}
