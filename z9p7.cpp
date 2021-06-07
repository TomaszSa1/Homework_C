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

std::string bin2dec(std::string s){
	int sum = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='1'){
			sum += pow(2,s.length()-i-1);
		}
	}
	return patch::to_string(sum);
}

int main(){
	std::string s;
	std::cin >> s;
	std::cout << bin2dec(s);
	return 0;
}
