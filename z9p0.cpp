#include <iostream>
#include <string>

bool pal(std::string s){
	for(int i=0;i<(s.length());i++){
		if(s[i]!=s[(s.length())-i-1]) return 0;
	}
	return 1;
}

int main(){
	std::string s;
	std::cin >> s;
	if(pal(s)) std::cout << std::endl << "Palindrom";
	else std::cout << std::endl << "Nie palindrom";
	return 0;
}
