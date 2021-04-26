#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
	int i, j, k;
	int D[20][20][3];
	srand((unsigned)time(0));
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			for(k=0; k<3;k++){
			D[i][j][k] = (rand()%256)+0;
			std::cout << D[i][j][k] << " ";
			}
			std::cout << std::endl;
		}
	}
	
	return 0;
}
