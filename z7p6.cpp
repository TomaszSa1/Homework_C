#include <iostream>
#include <string>

int main(){
	int flag=1;
	int flag1=0;
	std::string A;
	std::string B;
	std::cin >> A;
	std::cin >> B;
	for(int i=0;i<B.size();i++){
		if(B[i]==A[0] && flag==1){
			flag=0;
		}
		if(flag==0){
			for(int j=0;j<A.size();j++){
				if(B[i+j]==A[j]) flag1=1;
				else{
					flag1=0;
					flag=1;
					break;
				}
			}
			if(flag1==1){
				std::cout << std::endl << "A zawiera sie w B";
				break;
			}
		}
	}
	if(flag1==0){
		std::cout << std::endl << "A nie zawiera sie w B";
	}
	return 0;
}
