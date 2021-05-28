#include <iostream>

int main(){
	int N;
	int k,n;
	std::cin >> N;
	std::cout << std::endl;
	int**S = new int*[N+1];
	for(n=0;n<N+1;n++){
		k=n;
		S[n] = new int[k+1];
	}
	for(n=0;n<N+1;n++){
		for(k=0;k<n+1;k++){
			if(k==0 || n==k) S[n][k]=1;
			else S[n][k]=S[n-1][k]+S[n-1][k-1];
			std::cout << S[n][k] << " ";
		}
		std::cout << std::endl;
	}
	for(n=0;n<N+1;n++){
		delete [] S[n];
	}
	delete [] S;
	return 0;
}
