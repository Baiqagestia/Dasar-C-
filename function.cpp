#include <iostream>
#include <cmath> // Untuk fungsi matematika seperti M_PI
using namespace std;

// Fungsi untuk menghitung luas dan keliling persegi panjang
void persegiPanjang(double panjang, double lebar, double &luas, double &keliling);

// Fungsi untuk menghitung luas dan keliling lingkaran
void lingkaran(double jariJari, double &luas, double &keliling);

// Fungsi untuk menampilkan menu dan mengembalikan pilihan pengguna
int tampilkanMenu();

// Fungsi utama
int main() {
    int pilihan;
    do {
        // Tampilkan menu
        pilihan = tampilkanMenu();

        if (pilihan == 1) {
            // Persegi panjang
            double panjang, lebar, luas, keliling;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;

            // Panggil fungsi
            persegiPanjang(panjang, lebar, luas, keliling);

            // Tampilkan hasil
            cout << "Luas persegi panjang: " << luas << endl;
            cout << "Keliling persegi panjang: " << keliling << endl;
        } else if (pilihan == 2) {
            // Lingkaran
            double jariJari, luas, keliling;
            cout << "Masukkan jari-jari: ";
            cin >> jariJari;

            // Panggil fungsi
            lingkaran(jariJari, luas, keliling);

            // Tampilkan hasil
            cout << "Luas lingkaran: " << luas << endl;
            cout << "Keliling lingkaran: " << keliling << endl;
        } else if (pilihan == 3) {
            cout << "Keluar dari program. Terima kasih!" << endl;
        } else {
            cout << "Pilihan tidak valid, coba lagi!" << endl;
        }
    } while (pilihan != 3);

    return 0;
}

// Definisi fungsi persegi panjang
void persegiPanjang(double panjang, double lebar, double &luas, double &keliling) {
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
}

// Definisi fungsi lingkaran
void lingkaran(double jariJari, double &luas, double &keliling) {
    luas = M_PI * jariJari * jariJari; // M_PI adalah konstanta untuk nilai π
    keliling = 2 * M_PI * jariJari;
}

// Definisi fungsi untuk menampilkan menu
int tampilkanMenu() {
    int pilihan;
    cout << "\n==== PROGRAM GEOMETRI ====" << endl;
    cout << "1. Hitung luas dan keliling persegi panjang" << endl;
    cout << "2. Hitung luas dan keliling lingkaran" << endl;
    cout << "3. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    return pilihan;
}
