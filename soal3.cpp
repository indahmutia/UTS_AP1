#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;
    float rata_rata;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    
    cout << "NIM: ";
    getline(cin, nim);
    
    cout << "Nilai Mata Kuliah:\n";
    cout << "Algoritma dan Pemrograman: ";
    cin >> nilai1;
    
    cout << "Probabilitas dan Statistika: ";
    cin >> nilai2;
    
    cout << "Sistem Operasi: ";
    cin >> nilai3;

    rata_rata = (nilai1 + nilai2 + nilai3) / 3.0f;

    // Output hasil penilaian
    cout << "\nHasil Penilaian:\n";
    
    cout << "Algoritma dan Pemrograman: ";
    if(nilai1 >= 60) {
        cout << "Lulus.\n";
    } else {
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";
    }
    
    cout << "Probabilitas dan Statistika: ";
    if(nilai2 >= 60) {
        cout << "Lulus.\n";
    } else {
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";
    }
    
    cout << "Sistem Operasi: ";
    if(nilai3 >= 60) {
        cout << "Lulus.\n";
    } else {
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";
    }

    // Output rata-rata
    cout << "Nilai Rata-rata Semester ini: " << rata_rata << endl;

    return 0;
}