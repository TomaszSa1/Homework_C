//Tomasz Sabat
#include <iostream>

int main(){
	int x; //iloœæ elementów tablicy
	int i; // iteracja
	int d; //d³ugoœæ fragmentu
	int flag; //flaga 0/1 wykonywania pêtli
	char kod; //nazwa operacji
	int przes; //przesuniêcie
	int start; //wyraz pocz¹tkowy dzia³ania
	int liczbaSesji;
	int idk;     //iloœæ wykonania dzia³ania zale¿nie od iloœci segmentów
	int reszta;    //reszta tablicy w operacji C
	int swap;   //zmienna do podmiany wyrazów
	int Tab[x];   //tablica do operowania
	std::cin >> liczbaSesji;
	while(liczbaSesji>0){
		x=0;
		while(x==0) std::cin >> x;
		i=0;
		while(i<x){
			std::cin >> Tab[i];
			i++;	
		}
		i=0;
		while(i<x){
			std::cout << Tab[i] << " ";
			i++;
		}
		std::cout << std::endl;
		while(flag){
			std::cin >> kod;
			if(kod=='R'){
				std::cin >> start >> d;
				if(d>x) d=x;
				while(start<0) start+=x;
				start = start%x;
				if(d==0) idk=0;
				else idk = x/d;
				while(idk){
					i=0;
					while(i<d/2){
						swap = Tab[(start+i+d*(idk-1))%x];
						Tab[(start+i+d*(idk-1))%x] = Tab[(start+(idk)*d-i-1)%x];
						Tab[(start+(idk)*d-i-1)%x] = swap;
						i++;
					}
					idk--;
				}
			}
			else if(kod=='C'){
				std::cin >> start >> d >> przes;
			    if(d>x) d=x;
			    reszta=x;
			    while(start<0) start+=x;
			    start = start%x;
			    while(przes<0) przes+=d;
			    if(d==0) ;
				else przes = przes%d;
				if(przes == 0) przes =d;
				if(d==0) idk = -1;
			    else idk = x/d;
			    while(idk>-1){
			    	if(reszta<d) {
			    		i=0;
			    		idk = x/d +1;
			    		while(i<(reszta-1)*(przes%reszta)){
			    			swap = Tab[(start+((i)/(reszta-1))%reszta+d*(idk-1))%x];
			    			Tab[(start+((i)/(reszta-1))%reszta+d*(idk-1))%x] = Tab[(start+((i)/(reszta-1)+i+1+i/(reszta-1))%reszta+d*(idk-1))%x];
			    			Tab[(start+((i)/(reszta-1)+i+1+i/(reszta-1))%reszta+d*(idk-1))%x] = swap;
			    		i++;
						}
						idk = -1;
					}
					else{
						i=0;
			    	while(i<(d-1)*przes){
			    			swap = Tab[(start+((i)/(d-1))%d+d*(idk-1))%x];
			    			Tab[(start+((i)/(d-1))%d+d*(idk-1))%x] = Tab[(start+((i)/(d-1)+i+1+i/(d-1))%d+d*(idk-1))%x];
			    			Tab[(start+((i)/(d-1)+i+1+i/(d-1))%d+d*(idk-1))%x] = swap;
			    		i++;
					}
					idk--;
					reszta-=d;
					if(reszta==0) idk =-1;
					}
				}
			}
			else if(kod=='S'){
				std::cin >> start >> d;
			    if(d>x/2) d=x;
			    while(start<0) start+=x;
			    start = start%x;
			    if(d==0) idk = 0;
				else idk = (x/d)/2;
			    while(idk>0){
			    	i=0;
			    	while(i<d){
			    		swap = Tab[(start+i+d*(idk-1)*2)%x];
			    		Tab[(start+i+d*2*(idk-1))%x] = Tab[(start+i+d*(idk*2-1))%x];
			    		Tab[(start+i+d*(idk*2-1))%x] = swap;
			    		i++;
					}idk--;	
				}
			    
			}
			else if(kod=='F'){
				flag=0;
			}
		}
		flag=1;
		i=0;
		while(i<x){
			std::cout << Tab[i] << " ";
			i++;
		}
		std::cout << std::endl;
		liczbaSesji--;
	}
	return 0;
}
