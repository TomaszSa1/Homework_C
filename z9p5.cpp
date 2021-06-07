#include <iostream>
#include <string>

std::string filter(std::string s, char k){
	int n = s.length();
	int p=0;
	for(int i=0;i<n-1;i++){
		if(s[i]==k){
			p++;                       //iloœæ liter do wyciêcia
			for(int j=i;j<n-1;j++){    //przesuwanie liter do przodu
				s[j]=s[j+1];
			}
			n--;             //liczenie d³ugoœci skróconego wyrazu
			i--;            //i-- dla powtarzaj¹cych siê liter np. woooow o
		}
	}
	for(int i=0;i<p;i++){
		s[s.length()-i-1]=' ';	     //skracanie wyrazu
	}
	if(s[n-1]==k) s[n-1] = ' ';     //wycinanie jeœli ostatnia litera ma byæ wyciêta
	return s;
}

int main(){
	char k;
	std::string s;
	std::cin >> s >> k;
	std::cout << std::endl << filter(s, k);
	return 0;
}
