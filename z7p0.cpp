#include <iostream>

int main(){
	int* p;
	int temp;
	int a=5;
	int b=10;
	std::cout << a << " " << b << std::endl;
	p=&temp;
	*p=a;
	a=b;
	b=*p;
	std::cout << a << " " << b;
	return 0; 
}
