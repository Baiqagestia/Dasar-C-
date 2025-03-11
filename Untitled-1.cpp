#include <iostream>
using namespace std;

int main() {
    // Membuat array 3 dimensi dengan variabel huruf
    char huruf[3][3][3] = {
        {
            {'A', 'B', 'C'},
            {'D', 'E', 'F'},
            {'G', 'H', 'I'}
        },
        {
            {'J', 'K', 'L'},
            {'M', 'N', 'O'},
            {'P', 'Q', 'R'}
        },
        {
            {'S', 'T', 'U'},
            {'V', 'W', 'X'},
            {'Y', 'Z', ' '}
        }
    };

    // Contoh cara mengakses elemen dalam array
    cout << huruf[0][1][2] << endl; // Output: 'A'
    cout << huruf[1][1][1] << endl; // Output: 'N'
    cout << huruf[2][2][1] << endl; // Output: 'Z'

    return 0;
}


/*
Penjelasan:

huruf[3][3][3] adalah array 3 dimensi dengan ukuran 3x3x3.
Setiap elemen pada array ini diisi dengan karakter huruf alfabet.
Anda bisa mengakses elemen-elemen spesifik dengan memberikan indeks dari setiap dimensi. 
Contoh huruf[0][0][0] akan menghasilkan 'A', dan huruf[2][2][1] akan menghasilkan 'Z'.




Pada kode tersebut, kita memiliki sebuah array 3 dimensi yang dinamai huruf. Array ini memiliki ukuran 
3
×
3
×
3
3×3×3, artinya terdapat 3 lapisan, setiap lapisan berisi 3 baris, dan setiap baris berisi 3 kolom.

Cara Mengakses Elemen Array 3 Dimensi
Untuk mengakses elemen tertentu dalam array 3 dimensi, kita menggunakan tiga indeks:

Dimensi pertama mewakili lapisan (layer).
Dimensi kedua mewakili baris di dalam lapisan tersebut.
Dimensi ketiga mewakili kolom di dalam baris tersebut.
Format untuk mengakses elemen tertentu adalah:

huruf[lapisan][baris][kolom];
Contoh:

huruf[0][1][2] mengacu pada elemen di lapisan pertama ([0]), baris kedua ([1]), kolom ketiga ([2]), yang berisi 'F'.
huruf[1][1][1] mengacu pada elemen di lapisan kedua ([1]), baris kedua ([1]), kolom kedua ([1]), yang berisi 'N'.
huruf[2][2][1] mengacu pada elemen di lapisan ketiga ([2]), baris ketiga ([2]), kolom kedua ([1]), yang berisi 'Z'.
Cara Mengakses Seluruh Elemen dalam Dimensi Pertama
Jika ingin mengakses semua elemen dalam dimensi pertama, kita bisa menggunakan indeks tetap untuk lapisan (dimensi pertama) 
dan kemudian menelusuri seluruh elemen pada dimensi kedua (baris) dan dimensi ketiga (kolom).

Misalnya, jika kita ingin mengakses semua elemen di lapisan pertama (huruf[0]), kita dapat melakukannya dengan dua loop 
bersarang untuk dimensi kedua dan ketiga:

for (int i = 0; i < 3; i++) {           // Loop untuk baris
    for (int j = 0; j < 3; j++) {       // Loop untuk kolom
        cout << huruf[0][i][j] << " ";  // Mengakses elemen di lapisan pertama
    }
    cout << endl;
}

Output
Loop ini akan mencetak semua elemen di lapisan pertama (huruf[0]):


A B C
D E F
G H I
Dengan cara yang sama, Anda bisa mengganti huruf[0] dengan huruf[1] atau huruf[2] untuk mengakses elemen pada lapisan kedua atau ketiga.
*/