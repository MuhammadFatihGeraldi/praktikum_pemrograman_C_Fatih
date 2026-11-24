#include <iostream>
#include <iomanip>

double hitungSubtotal(double harga, int jumlah) {
    return harga * jumlah;
}

double hitungDiskon(double subtotal) {
    if (subtotal >= 500000) return subtotal * 0.15; 
    if (subtotal >= 250000) return subtotal * 0.10; 
    if (subtotal >= 100000) return subtotal * 0.05; 
    return 0; 
}

double hitungPajak(double nilaiSetelahDiskon) {
    return nilaiSetelahDiskon * 0.11;
}


void cetakStruk(double harga, int jumlah, double subtotal, double diskon, double pajak, double total, double bayar, double kembali) {
    std::cout << "\n==================================\n";
    std::cout << "          STRUK BELANJA           \n";
    std::cout << "==================================\n";
    std::cout << "Harga Satuan : Rp " << harga << "\n";
    std::cout << "Jumlah       : " << jumlah << "\n";
    std::cout << "Subtotal     : Rp " << subtotal << "\n";
    std::cout << "Diskon       : Rp " << diskon << "\n";
    std::cout << "Pajak (11%)  : Rp " << pajak << "\n";
    std::cout << "TOTAL BAYAR  : Rp " << total << "\n";
    std::cout << "Bayar        : Rp " << bayar << "\n";
    std::cout << "Kembalian    : Rp " << kembali << "\n";
    std::cout << "==================================\n";
}

int main() {
    int pilihanMenu;

    std::cout << std::fixed << std::setprecision(2);

    do {
        std::cout << "=== MENU UTAMA ===\n";
        std::cout << "1. Transaksi Baru\n";
        std::cout << "2. Keluar\n";
        std::cout << "Pilih menu: ";
        std::cin >> pilihanMenu;

        if (pilihanMenu == 1) {
            double hargaSatuan;
            int jumlahBarang;

            std::cout << "\nMasukkan harga satuan (Rp1.000 - Rp100.000.000): ";
            std::cin >> hargaSatuan;
            if (hargaSatuan < 1000 || hargaSatuan > 100000000) {
                std::cout << "Kesalahan: Harga di luar jangkauan!\n\n";
                continue; 
            }

            std::cout << "Masukkan jumlah barang (1 - 1.000): ";
            std::cin >> jumlahBarang;
            if (jumlahBarang < 1 || jumlahBarang > 1000) {
                std::cout << "Kesalahan: Jumlah di luar jangkauan!\n\n";
                continue; 
            }

            
            double subtotal = hitungSubtotal(hargaSatuan, jumlahBarang);
            double diskon = hitungDiskon(subtotal);
            double nilaiSetelahDiskon = subtotal - diskon;
            double pajak = hitungPajak(nilaiSetelahDiskon);
            double totalBayar = nilaiSetelahDiskon + pajak;

            std::cout << "\nTotal yang harus dibayar: Rp " << totalBayar << "\n";
            
           
            double bayar;
            std::cout << "Masukkan nominal uang pembayaran: ";
            std::cin >> bayar;

            if (bayar < totalBayar) {
                std::cout << "Kesalahan: Uang pembayaran kurang!\n\n";
            } else {
                double kembalian = bayar - totalBayar;
                
                cetakStruk(hargaSatuan, jumlahBarang, subtotal, diskon, pajak, totalBayar, bayar, kembalian);
            }
        }
    } while (pilihanMenu != 2);

    std::cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
}