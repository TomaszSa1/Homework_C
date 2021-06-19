#include <iostream>
#include <string>
#include <fstream>

int main(){
	std::fstream plik("Jabberwocky.txt");
	std::string word;
	int n=0; //liczba s³ów
	while(!plik.eof()){
		plik >> word;
		n++;
	}
	plik.close();
	std::cout << n;
	return 0;
}
