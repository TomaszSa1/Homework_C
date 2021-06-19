#include <iostream>
#include <string>
#include <fstream>

int main(){
	std::fstream plik("Jabberwocky.txt");
	std::string line;
	while(std::getline(plik,line)){
		std::cout << line << std::endl;
	}
	plik.close();
	return 0;
}

