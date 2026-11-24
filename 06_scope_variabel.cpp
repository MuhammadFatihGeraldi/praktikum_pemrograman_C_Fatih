#include <iostream>

int penghitungGlobal = 0;

void tambahGlobal() {
	++penghitungGlobal;
}

void demoBayangan (int x) {
	std::cout << " parameter x (fungsi) = " << x << '\n';
	{
		
		int x = 50;
		std::cout << " x di blok dalam	= " << x << '\n';
	}
	std::cout << " parameter x setelah di blok = " << x << '\n';
}

int main () {
	int x = 10;
	std::cout << " x di main = " << x << '\n';
	{
		
		int x = 20;
		std::cout << " x di main setelah di blok = " << x << '\n';
	}
	std::cout << " x di main setelah blok = " << x << '\n';

	demoBayangan(7);
	
	tambahGlobal();
	tambahGlobal();
	tambahGlobal();
	std::cout << " penghitungGlobal = " << penghitungGlobal << '\n';
	
	return 0;
}
 

