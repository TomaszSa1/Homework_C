#include <iostream>

bool Friends(int n, int m){
	int a=0;
	int b=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			a+=i;
		}
	}
	for(int i=1;i<m;i++){
		if(m%i==0){
			b+=i;
		}
	}
	if(a==m && b==n) return 1;
	else return 0;
}

int main(){
	int n,m;
	std::cin >> n >> m;
	if(Friends(n,m)==1) std::cout << std::endl << "Friends";
	else std::cout << std::endl << "No friends"; 
	return 0;
}
