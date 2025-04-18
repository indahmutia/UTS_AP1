#include <iostream>
using namespace std;

int main() {
    string kata;
    int hitung = 0;

    cout << "Masukkan mantra: ";
    getline(cin, kata);  // Baca input mantra

    int i = 0;
    while(i < kata.length()) {
        char huruf = tolower(kata[i]);  // Ubah ke huruf kecil
        
        // Cek apakah huruf vokal
        if(huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
            hitung++; 
        }
        i++;
    }


    if(hitung > 0) {
        cout << "Kekuatan mantra: " << hitung << " vokal";
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal.";
    }

    return 0;
}