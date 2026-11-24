#include <iostream>

void ubahNilai (int x) {
	x = 99;
	std::cout << " (di dalam fungsi, x = " << x << ")\n";
}

void tukarSalah (int a, int b) {
	int sementara = a;
	a = b;
	b = sementara;
}

void tukarBenar (int a, int& b) {
	int sementara = a;
	a = b;
	b = sementara;
}

int main () {
	int nilai = 10;
	std::cout << "Sebelum ubahNilai : " << nilai << '\n';
	ubahNilai (nilai);
	std::cout << "Sesudah ubahNilai : " << nilai << " (tidak berubah)\n";
	
	int x = 1, y = 2;
	std::cout << "Sebelum tukarSalah: " << x << " y= " << y << '\n';
	tukarSalah(x, y);
	std::cout << "Sesudah tukarSalah: " << x << " y= " << y << '\n';
	
	std::cout << "Sebelum tukarBenar: " << x << " y= " << y << '\n';
	tukarBenar(x, y);
	std::cout << "Sesudah tukarBenar: " << x << " y= " << y << '\n';
	
	return 0;
}