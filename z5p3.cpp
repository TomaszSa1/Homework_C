#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
	int i, j;
	float sKol[7]={0};
	float sWie[7]={0};
	int C[7][7];
	srand((unsigned)time(0));
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			C[i][j] = (rand()%21)+(-10);
			std::cout << C[i][j] << " ";
			sWie[i]+=C[i][j];
		}
		sWie[i]=sWie[i]/7;
	std::cout << std::endl;
	}
	for(j=0;j<7;j++){
		for(i=0; i<7; i++){
			sKol[j]+=C[i][j];
		}
		sKol[j]=sKol[j]/7;	
	}
	std::cout << std::endl;
	for(i=0; i<7; i++){
		std::cout << "Srednia kolumny " << i << ": " << sKol[i] << std::endl;
	}
	std::cout << std::endl;
	for(i=0; i<7; i++){
	  	std::cout << "Srednia wiersza " << i << ": " << sWie[i] << std::endl;
	}
	return 0;
}
