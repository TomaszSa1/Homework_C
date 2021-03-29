#include <iostream>

int main(){
	float a,b,c,min;
	std::cin >> a >> b >> c;
	if(a<b)	min = a;
	else	min = b;
	if(min>c) min = c;
	std::cout <<"From given numbers " << min << " is the lowest";
	return 0;
}
