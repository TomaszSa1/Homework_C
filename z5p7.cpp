#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
	int i, j, k;
	int Tab[20][20]={0};
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
	std::cout << std::endl;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			for(k=0; k<3;k++){
				Tab[i][j]+=D[i][j][k];
			}
			Tab[i][j]=Tab[i][j]/3;
			std::cout << Tab[i][j] << std::endl;
		}
	}
	
	return 0;
}
