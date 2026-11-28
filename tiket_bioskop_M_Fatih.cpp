#include <iostream>
#include <iomanip>
#include <string>

int main () {
	char kategori;
	int jumlah;
	int hari;
	
	while (true) {
	std::cout << "Anak   : A\n ";
	std::cout << "Dewasa : D\n ";
	std::cout << "Lansia : L\n ";
	std::cout << " Masukkan kode kategori : "; std::cin >> kategori;
	if (kategori == 'A' || kategori == 'a') {
		std::cout << "A\n";
		break;
	} else if (kategori == 'D' || kategori == 'd') {
		std::cout << "D\n";
		break;
	} else if (kategori == 'L' || kategori == 'l') {
		std::cout << "L\n";
		break;
	} else {
		std::cout << "Kategori tidak valid.\n";
		continue;
	}
}

	while (true) {
	std::cout << " Masukkan jumlah penonton (1-10)           : "; std::cin >> jumlah;
	if (jumlah >= 1 && jumlah <= 10) {
		break;
	}
		std::cout << " Jumlah harus 1-10.\n";
		continue;
	} 

	while (true) {
	std::cout << " Senin   : 1" << '\n';
	std::cout << " Selasa  : 2" << '\n';
	std::cout << " Rabu    : 3" << '\n';
	std::cout << " Kamis   : 4" << '\n';  
	std::cout << " Jumat   : 5" << '\n';
	std::cout << " Sabtu   : 6" << '\n';
	std::cout << " Minggu  : 7" << '\n';
	std::cout << " Masukkan Hari (1-7)			             : "; std::cin >> hari;
	if (hari >= 1 && hari <= 7) {
		break;
	}
		std::cout << " Hari harus 1-7.\n";
		continue;
	}
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\nKategori : ";
	if (kategori == 'A' || kategori == 'a') {
		std::cout << "A\n";
	} else if (kategori == 'D' || kategori == 'd') {
		std::cout << "D\n";
	} else {
		std::cout << "L\n";
	}
	
	double harga;
	if (kategori == 'A') {
		harga = 25000;
	} else if (kategori == 'D') {
		harga = 50000;
	} else {
		harga = 35000;
	}
	std::cout << " Harga	 : " << harga << '\n';
	
	std::cout << " Jumlah    : " << jumlah << '\n';
	
	double subtotal;
	subtotal = harga * jumlah;
	std::cout << " Subtotal  : " << subtotal << '\n';
	
	double diskon;
	if (hari >= 1 && hari <= 4) {
		diskon = subtotal * 0.10;
	} 
	std::cout << " Diskon    : " << diskon << '\n';
	
	 double total;
	 total = subtotal - diskon;
	 std::cout << " Total    : " << total << '\n';
	
	return 0;
}