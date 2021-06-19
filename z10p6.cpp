#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main(){
	std::fstream plik("election.txt");
	std::string line;
	int n=0;
	int m;
	int max=0;
	int maxName;
	while(std::getline(plik,line)){
		m = line.length()/2;
		n++;
	}
	plik.close();
	std::fstream plik1("election.txt");
	int votes[n][m];
	int i=0;
	while(std::getline(plik1,line)){
		for(int j=0;j<m;j++){
			votes[i][j] = line[j*2] -48;
		}
		i++;
	}
	for(i=0; i<n;i++){
		for(int j=0;j<m;j++){
			std::cout << votes[i][j] << " ";
		}
		std::cout << std::endl;
	}
	int wynik[m]={0};
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			if(votes[i][0]==j){
				wynik[j]++;
			}
		}
	}
	for(int i=0; i<m;i++){
		if(max<wynik[i]){
			maxName = i;
			max = wynik[i];
		}
	}
	std::cout << "Zwyciezca: " << maxName;
	plik1.close();
	return 0;
}
