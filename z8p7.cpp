#include <iostream>

void yes(){
	std::cout << "Yes!" << std::endl;
}

void no(){
	std::cout << "No!" << std::endl;
}

void vote(char*p){
	if(*p=='n') no();
	if(*p=='y') yes();
}

int main(){
	char k;
	char *p=&k;
	std::cout << "y for yes or n for no" << std::endl;
	std::cin >> *p;
	vote(p);
	return 0;
}
