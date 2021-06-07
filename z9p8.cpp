#include <string>
#include <sstream>                                                       //ca³y
																		 //ten
namespace patch                                                          //kawa³ek
{                                                                        //dla
    template < typename T > std::string to_string( const T& n )          //to_string
    {                                                                    //aby
        std::ostringstream stm ;                                         //dzia³a³
        stm << n ;                                                       //
        return stm.str() ;                                               //https://stackoverflow.com/questions/12975341/to-string-is-not-a-member-of-std-says-g-mingw
    }                                                                    //
}
#include <math.h>
#include <iostream>
#include <cstdlib>

std::string reverse(std::string s){
	char temp;
	for(int i=0;i<(s.length())/2;i++){
		temp = s[i];
		s[i] = s[(s.length())-i-1];
		s[(s.length())-i-1] = temp;
	}
	return s;
}

std::string dec2bin(std::string s){
	if(s[0]=='0') return "0";
	std::string s2;
	int x;
	x = atoi(s.c_str());                        //stoi nie dzia³a u mnie    //komentarz pó¿niej: dzia³a, -std=c++11 dodane do dev c++
	while(x>0){
		s2.append((patch::to_string(x%2)));
		x/=2;
	}
	return reverse(s2);                         //korzystam z poprzedniego zadania "reverse"
}

int main(){
	std::string s;
	std::cin >> s;
	std::cout << dec2bin(s);
	return 0;
}
