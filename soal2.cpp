#include <iostream>
using namespace std;

int main() {
    string biner;
    cout << "Masukkan bilangan biner: ";
    cin >> biner;
    
    
    for(char c : biner) {
        if(c != '0' && c != '1') {
            cout << "Pesan Rusak!";
            return 0; // Langsung keluar jika tidak valid
        }
    }
    
    
    int desimal = 0;
    int panjang = biner.length();
    
    for(int i = 0; i < panjang; i++) {
        // Jika digitnya '1', tambahkan 2 pangkat posisinya
        if(biner[i] == '1') {
            desimal += (1 << (panjang - i - 1)); // Menggunakan shift bit
        }
    }
    
    cout << "Nilai desimal: " << desimal;
    return 0;
}