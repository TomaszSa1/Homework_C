#include <iostream>

int main(){
	int n,m;
	int temp;
	int *p;
	p=&temp;
	std::cin >> n;
	std::cout << std::endl;
	std::cin >> m;
	std::cout << std::endl;
	int * Tab1 = new int[n];
	int * Tab2 = new int[m];
	int * Tab3 = new int[n+m];
	std::cout << std::endl;
	for(int i=0;i<n;i++){
		Tab1[i]=i*3;
		std::cout << Tab1[i] << " ";
	}
	std::cout << std::endl;
	for(int i=0;i<m;i++){
		Tab2[i]=i*5;
		std::cout << Tab2[i] << " ";
	}
	std::cout << std::endl << std::endl;
	for(int i=0;i<n;i++){
		Tab3[i]=Tab1[i];
	}
	for(int i=0;i<m;i++){
		Tab3[n+i]=Tab2[i];
	}
	for(int i=0;i<n+m;i++)
		std::cout << Tab3[i] << " ";
	std::cout << std::endl;
	for(int i=0;i<m+n-1;i++){
		for(int j=0;j<m+n-1;j++){
			if(Tab3[j]>Tab3[j+1]){
				*p=Tab3[j];
				Tab3[j]=Tab3[j+1];
				Tab3[j+1]=*p;
			}
		}
	}
	for(int i=0;i<n+m;i++)
		std::cout << Tab3[i] << " ";
	std::cout << std::endl;
	delete [] Tab1;
	delete [] Tab2;
	delete [] Tab3;
	return 0;
}
