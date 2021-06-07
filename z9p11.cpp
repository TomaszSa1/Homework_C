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
}                                                                        //
#include <iostream>
//#include <cstdlib>
#include <math.h>

std::string reverse(std::string s){
	char temp;
	for(int i=0;i<(s.length())/2;i++){
		temp = s[i];
		s[i] = s[(s.length())-i-1];
		s[(s.length())-i-1] = temp;
	}
	return s;
}

std::string change_base(std::string s, int base1, int base2){
	std::string s1;
	int n = std::stoi(s,nullptr,base1);
	while(n>0){
		if((n%base2)<10)
			s1.append((std::to_string(n%base2)));
		else{
			s1.append(patch::to_string(char('A'+(n%base2-10))));
		}
		n/=base2;
	}
	return reverse(s1);
}

int main(){
	int base1, base2;
	std::string s;
	std::cin >> s >> base1 >> base2;
	std::cout << std::endl <<change_base(s,base1,base2);
	return 0;
}
