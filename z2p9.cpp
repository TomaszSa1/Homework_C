#include <iostream>

int main(){
	 float t1,t2,m;
	 std::cout <<"Give t1, t2, m" << std::endl;
	 std::cin >> t1 >> t2 >> m;
	 std::cout <<"Potential profit is equal " << (t2-t1)*m/t1;
	 return 0;
}
