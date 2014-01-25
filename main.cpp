#include <iostream>
#include "add.h"
#include "pow.h"
#include "multiply.h"
#include "test.cpp"

int main(){
	areEquals (4, add(2,2));
	std::cout << multiply(2,5) << "\n";
	std::cout << Pow(2,4) << "\n";
	std::cout << Pow(add(multiply(2,2),4),3);
	return 0;
}