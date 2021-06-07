#include <iostream>
#include <string>

bool dirty(std::string s){
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'));
		else return 1;
	}
	return 0;
}

int main(){
	std::string s;
	std::cin >> s;
	if(dirty(s)) std::cout << std::endl << "Znaki specjalne lub cyfry";
	else std::cout << std::endl << "Brak znakow specjanych i cyfr";
	return 0;
}
