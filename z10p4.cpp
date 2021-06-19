#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include<bits/stdc++.h> 


int main(){
	//system("chcp 1250");
	//system("CLS");
	setlocale( LC_ALL, "pl_PL" );
	std::string s,line;
	std::fstream input("Palindromy.txt");
	std::ofstream output ("Ymordnilap.txt");
	if(!output){
        std::cout<<"Error in creating file!!!";
        return 0;
    }
    std::cout<<"File created successfully.";
    
	while(std::getline(input,line)){
		if(line[0]>='A' && line[0]<='Z'){
			output << line << std::endl; 
			
		}
	    else {
	   		reverse(line.begin(),line.end());
	   		output << line << std::endl;
		} 
	}
	input.close();
	output.close();
	return 0;
}
