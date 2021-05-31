#include <iostream>
#include <math.h>

void root(double* x){
	std::cout << std::endl << sqrt(*x);
}

int main(){
	double k;
	double *x=&k;
	std::cin >> *x;
	root(x);
	return 0;
}
