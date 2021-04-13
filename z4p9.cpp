#include <iostream>

int main(){
	int Tab[100];
	int i,a;
	std::cout << "   ";
	for(i=1;i<100;i++){
		Tab[i] = i+1;
		for(a=2;a<=Tab[i]/2 || Tab[i]==2 || Tab[i]==3;a++){ 
			if(Tab[i]%a==0 && Tab[i]!=2) {std::cout << "   "; break; }
			if(a==Tab[i]/2 || Tab[i]==2 || Tab[i]==3) {std::cout << Tab[i] << " "; break;}	
		}
		if((i+1)%10==0) std::cout << std::endl;
	}
	return 0; 
}
//do Tab[i]/2 bo nie ma sensu sprawdzaæ podzielnoœci - pomiêdzy tylko u³amki od 2 do 1
