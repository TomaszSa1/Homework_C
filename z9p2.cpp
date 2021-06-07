#include <iostream>
#include <string>

std::string reverse(std::string s){
	char temp;
	for(int i=0;i<(s.length())/2;i++){
		temp = s[i];
		s[i] = s[(s.length())-i-1];
		s[(s.length())-i-1] = temp;
	}
	return s;
}

int main(){
	std::string s;
	std::cin >> s;
	std::cout << std::endl << reverse(s);
	return 0;
}
