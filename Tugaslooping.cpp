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