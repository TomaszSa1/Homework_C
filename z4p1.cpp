#include <iostream>
#include <math.h>

int main(){
	float A[5];
	int i;
	float sa, sg, sk, sh;     // s - œrednia, a - arytmetyczna, g - geometryczna, k - kwadratowa, h - harmoniczna
	float j=0;
	float k=1;
	float l=0;
	float m=0;
	for(i=0;i<5;i++){
		A[i] = 2*i+1;
		std::cout << A[i] << " ";
	}
	for(i=0;i<5;i++){
		j += A[i];
		k *= A[i];
		l += pow(A[i],2);
		m += 1/(A[i]);
	}
	sa = j/5;
	sg = pow(k, 0.2);
	sk = pow((l/5), 0.5);
	sh = 5/m;
	std::cout << std::endl << "Sr. aryt. = " << sa << std::endl << "Sr. geo. = " << sg; 
	std::cout << std::endl << "Sr. kwadr. = " << sk << std::endl << "Sr. har. = " << sh;
	return 0;	
}
