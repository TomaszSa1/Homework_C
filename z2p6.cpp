#include <iostream>
#include <math.h>

int main(){
	float a1,a2,b1,b2,r1,r2;
	std::cout <<"Give a1 a2 b1 b2 r1 r2" << std::endl;
	std::cin >> a1 >> a2 >> b1 >> b2 >> r1 >> r2;
	if(sqrt((a1-a2)*(a1-a2) + (b1-b2)*(b1-b2)) > r1+r2 )
		std::cout <<"Circles have empty intersection";
	else
		std::cout <<"Circles don't have empty intersection";
	return 0; 
}
