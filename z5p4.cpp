#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
	int i, j;
	int swap;
	int C[7][7];
	srand((unsigned)time(0));
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			C[i][j] = (rand()%21)+(-10);
			std::cout << C[i][j] << " ";
		}
	std::cout << std::endl;
	}
	std::cout << std::endl;
	for(i=1;i<7;i++){
		for(j=0;j<i;j++){
			swap=C[i][j];
			C[i][j]=C[j][i];
			C[j][i]=swap;
		}
		
	}
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			std::cout << C[i][j] << " ";
		}
	std::cout << std::endl;
	}
	return 0;
}
