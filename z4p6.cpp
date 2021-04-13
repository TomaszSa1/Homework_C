#include <cstdlib> 
#include <ctime>
#include <iostream>

int main(){
	int B[12];
	int i, max=0;
	int tab[10];
	for(i=0;i<10;i++)
		tab[i] = 0;
	srand((unsigned)time(0));
	for(i=0;i<12;i++){
		B[i] = (rand()%10)+1;
		std::cout << B[i] << " ";
		tab[B[i]]++;
	}
	for(i=0;i<10;i++){
		if(max<tab[i])
			max = tab[i]; 
	}
	std::cout << std::endl << "Moda to: ";
	for(i=0;i<10;i++)
		if(max==tab[i])
			std::cout << " " << i;
	return 0;
}
