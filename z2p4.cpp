#include <iostream>

int main(){
	float a,b,c;
	std::cin >> a >> b >> c;
	if(a==b || b==c || a==c)
		std::cout << "At least 2 of 3 numbers are equal";
	else
		std::cout <<"Every number is different from the others";
	return 0;
}
