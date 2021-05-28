#include <iostream>
#include <cstdlib> 
#include <ctime>

int main(){
	int n,m;
	int zakres = 1000;
	srand((unsigned)time(0));
	std::cin >> n >> m;
	std::cout << std::endl;
	int * Tab1 = new int[n+1];
	int * Tab2 = new int[m+1];
	int * Tab3 = new int[m+n+1];
	for(int i=0;i<n+1;i++){
		Tab1[i] = (rand()%(zakres*2))-zakres;
	}
	for(int i=n;i>=0;i--){
		std::cout << Tab1[i] << "x^" << i;
		if(i>0) std::cout << " + ";
	}
	std::cout << std::endl << std::endl;
	for(int i=0;i<m+1;i++){
		Tab2[i] = (rand()%(zakres*2))-zakres;
	}
	for(int i=m;i>=0;i--){
		std::cout << Tab2[i] << "x^" << i;
		if(i>0) std::cout << " + ";
	}
	for(int i=n;i>=0;i--){
		for(int j=m;j>=0;j--){
			      							//zerowanie wartoœci tablicy Tab3 dla pewnoœci wyniku +=
			Tab3[i+j]=0;
		}
	}
	for(int i=n;i>=0;i--){
		for(int j=m;j>=0;j--){      					
			Tab3[i+j]+=Tab1[i]*Tab2[j];
		}
	}
	std::cout << std::endl << std::endl;
	for(int i=m+n;i>=0;i--){
		std::cout << Tab3[i] << "x^" << i;
		if(i>0) std::cout << " + ";
	}
	delete [] Tab1;
	delete [] Tab2;
	delete [] Tab3;
	return 0;
}
