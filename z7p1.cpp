#include <iostream>

int main(){
	int n;
	int temp;
	int *p;
	p=&temp;
	std::cin >> n;
	std::cout << std::endl;
	int * Tab1 = new int[n];
	int * Tab2 = new int[n];
	for(int i=0;i<n;i++){
		Tab1[i]=i;
		Tab2[i]=i*10;
		std::cout << Tab1[i] << " " << Tab2[i] << std::endl;
	}
	std::cout << std::endl;
	for(int i=0;i<n;i++){
		*p=Tab1[i];
		Tab1[i]=Tab2[i];
		Tab2[i]=*p;
		std::cout << Tab1[i] << " " << Tab2[i] << std::endl;	
	}
	delete [] Tab1;
	delete [] Tab2;
	return 0;
}
