#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main(){
	int n;
	int m;
	int pom;
	std::cin >> n >> m;
	int tab[n][m];
	int votes[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			tab[i][j]=j;
		}
	}
	srand((unsigned)time(0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			pom = rand()%m;
				if(tab[i][pom]==pom){
					votes[i][j]=pom;
					tab[i][pom]=-1;
				}
				else{
					j--;
				}
		}
	}
	std::ofstream plik ("election.txt");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			plik << votes [i][j] << " ";
		}
		plik <<std::endl;
	}
	plik.close();
	return 0;
}
