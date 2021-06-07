#include <iostream>
#include <string>

std::string first(std::string s1, std::string s2){
	for(int i=0;i<(s1.length());i++){
		if(s1[i]<s2[i]) return s1;
		else if(s1[i]>s2[i]) return s2;
	}
	return s1;
}

int main(){
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << std::endl << first(s1,s2);
	return 0;
}
