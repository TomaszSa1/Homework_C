#include <iostream>

int main(){
	  float p;
	  float o; //ocena
	  std::cin >> p;
	  if(p>=0 && p<50)  		o = 2;
	  else if(p>=50 && p<60)  	o = 3;
	  else if(p>=60 && p<70)  	o = 3.5;
	  else if(p>=70 && p<80)  	o = 4;
	  else if(p>=80 && p<90)  	o = 4.5;
	  else if(p>=90 && p<=100)  o = 5;
	  else {
	  	std::cout <<"False data";
	  	return 1;}
	  std::cout <<"Twoja ocena to: " << o;
	  return 0; 
}
