#include <iostream>
#include <cmath>

using namespace std;

// === Deklarasi Variabel Global ===
int angkaInput;
int pilihanMenu;
// === Function Pengecekan Bilangan Prima (bool) ===
bool apakahPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    // Menggunakan while loop untuk mengecek pembagi
    while (i <= sqrt(n)) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}
// === Function Pengecekan Bilangan Fibonacci (bool) ===
bool apakahFibonacci(int n) {
    if (n < 0) return false;
    
    int a = 0;
    int b = 1;
    // Menggunakan while loop untuk menelusuri deret
    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    // Jika a sama dengan n, maka n adalah bagian dari deret Fibonacci
    return (a == n);
}
// === Prosedur Input Angka ===
void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angkaInput;
}
// === Prosedur Menampilkan Hasil Prima ===
void tampilkanHasilPrima() {
    if (apakahPrima(angkaInput)) {
        cout << ">>> " << angkaInput << " adalah Bilangan Prima." << endl;
        } else {
        cout << ">>> " << angkaInput << " BUKAN Bilangan Prima." << endl;
    }
}
// === Prosedur Menampilkan Hasil Fibonacci ===
void tampilkanHasilFibonacci() {
    if (apakahFibonacci(angkaInput)) {
        cout << ">>> " << angkaInput << " adalah bagian dari deret Fibonacci." << endl;
    } else {
        cout << ">>> " << angkaInput << " BUKAN bagian dari deret Fibonacci." << endl;
    }
}
// === Function Menu ===
void tampilkanMenu() {
    cout << "\n======================================" << endl;
    cout << "       MENU PENGECEKAN BILANGAN       " << endl;
    cout << "======================================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar Program" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Pilih menu (0-2): ";
    cin >> pilihanMenu;
}
// === Function Main ===
int main() {
    bool berjalan = true;

    while (berjalan) {
        tampilkanMenu();
        switch (pilihanMenu) {
            case 1:
                inputAngka();
                tampilkanHasilPrima();
                break;
            case 2:
                inputAngka();
                tampilkanHasilFibonacci();
                break;
            case 0:
                cout << "Terima kasih! Keluar dari program..." << endl;
                berjalan = false;
                break;
                default:
                cout << "Pesan: Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    }
    return 0;
}