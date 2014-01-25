#include <iostream>

void areEquals(double expected, double got){
	if (expected != got){
		std::cout << "Expected: " << expected << " but got : " << got < "\n";
		
	}
	else
		std::cout << "test passed!\n";

}
/*
int main(){
	areEquals (4, add(2,2));
	std::cout << multiply(2,5) << "\n";
	std::cout << Pow(2,4);
	return 0;
}
*/