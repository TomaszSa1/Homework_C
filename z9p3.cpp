#include <iostream>
#include <string>

std::string con(std::string s1, std::string s2){
	return s1 + s2;
}

int main(){
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << std::endl << con(s1,s2);
	return 0;
}
