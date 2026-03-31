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