#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

int main(){
	std::ofstream plik ("time.txt");
	
	if(!plik)
    {
        std::cout<<"Error in creating file!!!";
        return 0;
    }
    std::cout<<"File created successfully.";
	std::time_t t = std::time(0);                     //pobranie czasu z systemu
    std::tm* now = std::localtime(&t);
    
    if((now->tm_mday)/10>0) plik << now->tm_mday; 
	else plik << '0' << now->tm_mday;
	plik << '.';
	if(((now->tm_mon + 1))/10>0) plik << (now->tm_mon + 1); 
	else plik << '0' << (now->tm_mon + 1);
	plik << '.';
	if(((now->tm_year + 1900))/10>0) plik << (now->tm_year + 1900); 
	else plik << '0' << (now->tm_year + 1900);
    plik << ' ';
    
	if((now->tm_hour)/10>0) plik << now->tm_hour; 
	else plik << '0' << now->tm_hour;
	plik << ':';
	if((now->tm_min)/10>0) plik << now->tm_min; 
	else plik << '0' << now->tm_min;
	plik << ':';
	if((now->tm_sec)/10>0) plik << now->tm_sec; 
	else plik << '0' << now->tm_sec;
	plik << '\n';
 
    plik.close();
	return 0;
}
