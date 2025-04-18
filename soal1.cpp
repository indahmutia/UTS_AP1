#include <iostream>
using namespace std;

int main() {
    int angka;
    
    cout << "Masukkan angka : ";
    cin >> angka;

    // Pertama, kita cek dulu angka negatif atau nol
    // Karena bilangan 2 pangkat selalu positif (1, 2, 4, 8, dst)
    if (angka <= 0) {
        cout << "bukan" << endl;  // Langsung bukan kalau <= 0
    } 
    else {
        // Trik utama: bilangan 2 pangkat dalam biner punya ciri khusus
        // Contoh: 
        // 8  = 1000 (biner)
        // 7  = 0111 (biner)
        // 8 & 7 = 0000 (hasilnya 0)
        
        // Jika angka AND (angka-1) hasilnya 0, berarti 2 pangkat
        if ((angka & (angka - 1)) == 0) {
            cout << "ya" << endl;  
        } else {
            cout << "bukan" << endl;  
        }
    }

    return 0;
}