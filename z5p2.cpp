#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
	int i, j;
	int max=-10;
	int M[7][7]={0} ;
	int C[7][7];
	srand((unsigned)time(0));
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			C[i][j] = (rand()%21)+(-10);
			std::cout << C[i][j] << " ";
			if(max<C[i][j])
				max=C[i][j];
		}
	std::cout << std::endl;
	}
	std::cout << std::endl;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(C[i][j]==max)                   //plansza 0 i 1 
				M[i][j]=1;
			std::cout << M[i][j] <<	" ";
		}
	std::cout << std::endl;
	}
	std::cout << std::endl;
	for(i=0;i<7;i++){                             //wspó³rzêdne
		for(j=0;j<7;j++){
			if(M[i][j]==1)
			std::cout << i << " " << j << std::endl;
		}
	}
	return 0;
}
