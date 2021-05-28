#include <iostream>
#include <cstdlib> 
#include <ctime>

int main(){
	int x,y,z;
	int zakres = 1000;
	std::cin >> x >> y >> z;
	std::cout << std::endl;
	srand((unsigned)time(0));
	int***Tab = new int**[x];
	for(int i=0;i<x;i++){
		Tab[i] = new int*[y];
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			Tab[i][j]= new int[z];
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			for(int k=0;k<z;k++){
				Tab[i][j][k] = (rand()%zakres);
				std::cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" << Tab[i][j][k] << std::endl;
			}
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			delete [] Tab[i][j];
		}
	}
	for(int i=0;i<x;i++){
		delete [] Tab[i];
	}
	delete [] Tab;
	return 0;
}
