#include <iostream>

int main(){
	float a,b,c;
	std::cin >> a >> b >> c;
	if(a<=b && b<=c)
		std::cout <<"Given numbers are in non-decreasing order";
	else
        std::cout <<"Given numbers aren't in non-decreasing order";
    return 0;
}
