#include <iostream>
#include <math.h>

int main(){
	float a,b,c,delta,x1,x2;
	std::cin >> a >> b >> c;
	delta = b*b - 4*a*c;
	if(delta<0){
		std::cout <<"No real square roots";
		return 0;
		}
	else if(delta==0){
		x1 = (-b)/(2*a);
		std::cout << x1;
		return 0;
		}
	else
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		std::cout << x1 << " oraz " << x2;
		return 0;
	
}
