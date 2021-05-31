#include <iostream>
#include <math.h>

int area(int a){
	return a*a;
}

int area(int a,int b){
	return a*b;
}

double area(double r){
	return M_PI*r*r;
}
int main(){
	int a,b,n;
	double r;
	int flag=1;
	while(flag==1){
		std::cout << std::endl << std::endl << "1.Pole kwadratu (a)" << std::endl << "2.Pole prostokata (a,b)" << std::endl << "3.Pole kola (r)" << std::endl << "4.Wyjscie" << std::endl << std::endl;
		std::cin >> n;
		std::cout << std::endl;
		switch(n){
			case 1:
				std::cin >> a;
				std::cout << std::endl << area(a);
				break;
			case 2:
				std::cin >> a >> b;
				std::cout << std::endl << area(a,b);
				break;
			case 3:
				std::cin >> r;
				std::cout << std::endl << area(r);
				break;
			case 4:
				flag=0;
				break;
		}
	}
	return 0;
}
