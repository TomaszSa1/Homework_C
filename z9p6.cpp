#include <iostream>
#include <string>

bool pesel(std::string s){
	if(s.length() != 11) return 0;
	int sum = 0;
	for (int i=0;i<s.length(); ++i){
		int x = s[i] - '0';
		if(i%4 == 0 || i==10)
			sum +=x;
		else if(i%4 == 1)
			sum += 3*x;
		else if(1%4 == 2)
			sum += 7*x;
		else 
			sum += 9*x;
		return sum%10 == 0;
	}

}

int main(){
	std::string s;
	std::cin >> s;
	if(pesel(s)) std::cout << std::endl << "Poprawny";
	else std::cout << std::endl << "Nie poprawny";
	return 0;
}
