#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
	int i, j;
	int sum;
	int C[7][7];
	srand((unsigned)time(0));
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			C[i][j] = (rand()%21)+(-10);
			std::cout << C[i][j] << " ";
			sum+=C[i][j];
		}
	std::cout << std::endl;
	}
	std::cout << sum;
	
	return 0;
}
