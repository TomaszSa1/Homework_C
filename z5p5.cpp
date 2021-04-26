#include <iostream>

int main(){
	int Tab[7][7];
	int i, j;
	for(i=0;i<7;i++){
		Tab[i][i]=1;
		Tab[i][0]=1;
	}
	for(i=2;i<7;i++){
		for(j=1;j<i;j++){
			Tab[i][j]=Tab[i-1][j]+Tab[i-1][j-1];
		}	
	}
	for(i=0;i<7;i++){
		for(j=0;j<=i;j++){
			std::cout << Tab[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
