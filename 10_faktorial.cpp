#include <iostream>
#include <iomanip>

int main () {
	int n;
	std::cout << "Masukkan n (0...20): ";
	std::cin >> n;
	
	if (n < 0 || n > 20) {
		std::cout << "n harus 0 sampai 20.\n";
		return 1;
	}	
	
	long long faktorial = 1;
	for (int i = 2; i <= n; ++i) {
		faktorial *= i;
	}
	std::cout << n << "! = " << faktorial << '\n';
	
	double harmonik = 0.0;
	for (int i = 1; i <= n; ++i) {
		harmonik += 1.0 / i;
	}
	std::cout << std::fixed << std::setprecision(4);
	std::cout << "Deret harmonik H(" << n << ") = " << harmonik << '\n';
	
	return 0;
}