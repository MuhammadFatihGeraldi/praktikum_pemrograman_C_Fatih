#include <iostream>
#include <string>

int luasPersegi (int sisi) {
	return sisi * sisi;
}

void sapa(std::string nama) {
	std::cout << "Halo, " << nama << "! Selamat belajar fungsi.\n";
}

int main () {
	sapa("Budi") ;
	sapa("Siti") ;
	
	int sisi = 5;
	int luas = luasPersegi(sisi);
	std::cout << "Luas persegi bersisi " << sisi << " = " << luas << '\n';
	
	std::cout<< "Luas persegi bersisi 1..3: ";
	for (int i = 1; i <= 3; ++i) {
		std::cout<< luasPersegi(i) << ' ';
	}
	std::cout<< '\n';
	
	return 0;
}