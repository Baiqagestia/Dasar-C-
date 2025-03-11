#include <iostream>
using namespace std;
int main() {

//DEKLARASI VARIABLE
int pembelian;
string pelanggan;
int diskon1 = 20;
int diskon2 = 10;

//INPUT
cout<<"masukan jumlah beli: "; cin>>pembelian;
cout<<"masukan kriteria pelanggan: \n1.Premium \n2.Reguler \nkriteria <1/2> = "; cin>>pelanggan;


//Proses Percabangan
if (pembelian > 1000000) {
    if (pelanggan == "1") {
        cout << "Kriteria pelanggan : Premium\n";
        cout << "Diskon yang diberikan: " << diskon1 << "%\n";
    } else if (pelanggan == "2") {
        cout << "Kriteria pelanggan : Reguler\n";
        cout << "Diskon yang diberikan: " << diskon2 << "%\n";
    } else {
        cout << "Pelanggan tidak memenuhi kriteria Untuk mendapat diskon";
    }


} else if (pembelian > 500000) {
    if (pelanggan == "2") {
        cout << "Kriteria pelanggan : Reguler\n";
        cout << "Diskon yang diberikan: " << diskon2 << "%\n";
    } else if (pelanggan == "1") {
        cout << "Kriteria pelanggan : Premium\n";
        cout << "Diskon tidak di berikan (tidak memenuhi kriteria total belanja) " << "\n";
    } else {
        cout << "Pelanggan tidak memenuhi kriteria.\ntanyakan mau member atau tidak!!";
    }

} else if (pembelian < 300000) {
    if (pelanggan == "2") {
        cout << "Kriteria pelanggan : Reguler\n";
        cout << "Tidak mendapat diskon karena tidak mencapai kriteria angka pembelian\n";
    } else if (pelanggan == "1") {
        cout << "Kriteria pelanggan : Premium\n";
       cout << "Tidak mendapat diskon karena tidak mencapai kriteria angka pembelian\n";
    } else {
        cout << "Pelanggan tidak memenuhi kriteria.\ntanyakan mau member atau tidak!!";
    }
}
}