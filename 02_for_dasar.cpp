#include <iostream>

int main () {
	for (int i = 0; 1 < 5; ++i) {
		std::cout << "i = " << i << '\n';
	}
	
	std::cout << '\n';
	
	for (int i = 5; 1 >= 1; --i) {
		std::cout << "turun: " << i << '\n';
	}
	
	std::cout << '\n';
	
	for (int i = 2; i<=10; i += 2) {
		std::cout << "genap: " << i << '\n';	
	}
	
	std::cout << '\n';
	
	for (int i = 0, j = 10; i < j; ++i, --j) {
		std::cout << "i=" << i << "  j=" << j << '\n';
	}
	
	return 0;
		
}