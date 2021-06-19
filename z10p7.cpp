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
				if(max<wynik[j]) max = wynik[j];
			}
		}
	}
	int max1=0;
	for(int i=0;i<m;i++){
		if(wynik[i]>max1 && wynik[i]<max) max1=wynik[i];
	}
	int el1=-1;
	int el2=-1;
	if(float(max)/float(n)<(float(n)/2)/float(n)){
		for(int i=0;i<m;i++){
			if(el1==-1 && wynik[i]==max) el1=i;
			else if(el2==-1 && el1!=-1 && wynik[i]==max1) el2=i;
		}
		wynik[el1]=0;
		wynik[el2]=0;
		for(int i=0;i<n;i++){
			for(int j=0; j<m; j++){
				if(votes[i][j]==el1) {wynik[el1]++; break;}
				else if(votes[i][j]==el2) {wynik[el2]++; break;}
			}
		}
		if(wynik[el1]>wynik[el2]) maxName=el1;
		else maxName=el2;
	}
	std::cout << "Zwyciezca: " << maxName;
	plik1.close();
	return 0;
}
