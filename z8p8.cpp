#include <iostream>

int add(int x, int y){
	return x+y;
}

int multiply(int x, int y){
	return x*y;
}

int operation(char *p, int x, int y){
	if(*p=='a') return add(x,y);
	if(*p=='m') return multiply(x,y);
}

int main(){
	int x,y;
	char k;
	char *p=&k;
	std::cout << "a for add or m for multiply, x, y" << std::endl;
	std::cin >> *p >> x >> y;
	std::cout << std::endl << operation(p,x,y);
	return 0;
}
