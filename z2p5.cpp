#include <iostream>

int main(){
	 float a,b,c;
	 std::cin >> a >> b >> c;
	 if(a+b>c && a+c>b && b+c>a)
	 	std::cout <<"From given sides it's possible to create triangle";
	else
		std::cout <<"From given sides it's impossible to create triangle";
	return 0;
}
