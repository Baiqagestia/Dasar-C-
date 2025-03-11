#include <iostream>
using namespace std;

int main() {
    int pilihan, pasienBaru;
    char ulang;
    
    do {
        cout << "=====================================\n";
        cout << "          Sistem Rumah Sakit         \n";
        cout << "=====================================\n";
        cout << "1. Pendaftaran Pasien\n";
        cout << "2. Pemeriksaan Dokter\n";
        cout << "3. Pembayaran\n";
        cout << "4. Keluar\n";
        cout << "Pilih layanan (1-4): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Pendaftaran Pasien\n";
            cout << "Apakah pasien baru? (1 = Ya, 0 = Tidak): ";
            cin >> pasienBaru;

            if (pasienBaru == 1) {
                cout << "Silakan isi formulir pendaftaran di meja resepsionis.\n";
            } else if (pasienBaru == 0) {
                cout << "Silakan tunjukkan kartu pasien lama Anda.\n";
            } else {
                cout << "Input tidak valid.\n";
            }
        } else if (pilihan == 2) {
            int keluhan;
            cout << "Pemeriksaan Dokter\n";
            cout << "1. Umum\n";
            cout << "2. Spesialis\n";
            cout << "Pilih jenis pemeriksaan (1-2): ";
            cin >> keluhan;

            if (keluhan == 1) {
                cout << "Silakan menuju ke ruang dokter umum (Ruang Pak Firman).\n";
            } else if (keluhan == 2) {
                cout << "Silakan menuju ke ruang dokter spesialis (Ruang Buk Agestia).\n";
            } else {
                cout << "Input tidak valid.\n";
            }
        } else if (pilihan == 3) {
            float biaya, bayar, kembalian;
            cout << "Pembayaran\n";
            cout << "Masukkan total biaya: ";
            cin >> biaya;
            cout << "Masukkan jumlah uang yang dibayarkan: ";
            cin >> bayar;

            if (bayar >= biaya) {
                kembalian = bayar - biaya;
                cout << "Pembayaran berhasil. Kembalian Anda: Rp" << kembalian << endl;
            } else {
                cout << "Pembayaran gagal. Uang Anda kurang sebesar Rp" << biaya - bayar << endl;
            }
        } else if (pilihan == 4) {
            cout << "Terima kasih telah menggunakan layanan rumah sakit kami.\n";
        } else {
            cout << "Pilihan tidak valid.\n";
        }

        cout << "Apakah Anda ingin kembali ke menu utama? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai. Semoga sehat selalu!\n";
    return 0;
}
