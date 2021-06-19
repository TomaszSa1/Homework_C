#include <iostream>
#include <string>
#include <fstream>

int main(){
	std::string s,line;
	std::fstream plik("Jabberwocky.txt");
	int licz[26]={0};
	while(std::getline(plik,line)){
		for(char i='a';i<='z';i++){
			for(int j=0;j<line.length();j++){
				if(line[j]==i || line[j]==i - ' '){
					licz[i-'a']++;
				}
			}
		}
	}
	
	std::cout <<std::endl;
	plik.close();
	for(int o=0;o<26;o++){
		std::cout << std::endl << char('a'+o) << " "<< licz[o] << '\t' << '|';
		for(int k=0;k<licz[o];k++){
			std::cout << "#";
		}
	}
	std::cout << std::endl;
	return 0;
}

