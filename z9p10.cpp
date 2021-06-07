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
#include <iostream>
#include <cstdlib>
#include <math.h>


std::string rzym(std::string s){
	int dec[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
	std::string rom[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	std::string convert;
	int j;
	int temp=0;
	
	if(s[0]>='0' && s[0]<='9'){
		if(s[0]=='0') return "0";
		int x;
		x = atoi(s.c_str());
		for(int i=12;i>=0;i--){
			while(dec[i]<=x){
				x-=dec[i];
				convert.append(rom[i]);
			}
		}
	}
	
	else{
		int sum = 0;
		for(int i=0;i<s.length();i++){
			for(j=0;j<13;j++){
				if(patch::to_string(s[i])==rom[j]){
					sum +=dec[j];
					if(i>0 && dec[j]>temp)                              //jeœli jest sytuacja typu IV, CM itd.
						for(int k=0;k<13;k++){
							if(patch::to_string(s[i-1])==rom[k]){
								sum -=2*dec[k];
								break;
						}		
					}
					temp=dec[j];
				}
			}
		}
		convert = patch::to_string(sum);
	} 
	return convert;
}

int main(){
	std::string s;
	std::cin >> s;
	std::cout << rzym(s);
	return 0;
}
