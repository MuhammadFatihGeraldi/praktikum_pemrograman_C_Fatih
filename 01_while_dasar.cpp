#include <iostream>

int main () {
	int i = 1;
	while (i <= 5) {
		std::cout << "Hitung: " << i << '\n';
		++i;
    }
	std::cout << "Selesai. Nilai akhir i = " << i << '\n';
		
	int n = 10;
	int jumlah = 0;
	int j = 1;
	while (j <= n) {
		jumlah += j;
		++j;
	}
	std::cout << "Jumlah 1.." << n << " = " << jumlah << '\n';
	
	return 0;
}
	