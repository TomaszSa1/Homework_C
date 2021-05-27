#include <iostream>

int main(){
	int n;
	int k;
	int sum;
	do{
	std::cout <<"Podaj liczbe od 0 do 20" << std::endl;
	std::cin >> n;
	} while(n>20 || n<0);
	int * Tab = new int[n];
	for(int i=0; i<n && sum<=100; i++){
		std::cin >> k;
		sum+=k;
		Tab[i]= k;
		if(sum>100){
			while(i<n-1){
				i++;
				Tab[i]=0;
			}
		}
	}
	for(int i=0;i<n;i++)
		std::cout << std::endl << Tab[i] << " ";
	delete [] Tab;
	return 0;
}
