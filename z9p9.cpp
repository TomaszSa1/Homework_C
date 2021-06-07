#include <iostream>
#include <string>

int main(){
	std::string s;
	std::getline(std::cin,s);
	int licz[26]={0};
	for(char i='a';i<='z';i++){
		for(int j=0;j<s.length();j++){
			if(s[j]==i || s[j]==i - ' '){
				licz[i-'a']++;
			}
		}
	}
	std::cout <<std::endl;

	//poziomo
	for(int o=0;o<26;o++){
			std::cout << std::endl << char('a'+o) << " "<< licz[o] << '\t' << '|';
			for(int k=0;k<licz[o];k++){
				std::cout << "#";
			}
	}
	std::cout << std::endl;
	return 0;
}
