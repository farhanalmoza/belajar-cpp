#include <iostream>

using namespace std;

// fungsi hitung luas persegi
double hitung_luas(double p, double l) {
    double luas = p * l;
    return luas;
}

// fungsi hitung keliling persegi
double hitung_keliling(double p, double l) {
    double keliling = 2 * (p + l);
    return keliling;
}

void tampilkan_luas(double p, double l){
    cout << "Luasnya adalah : ";
    cout << hitung_luas(p, l) << endl;
}

void tampilkan_keliling(double p, double l){
    cout << "kelilingnya adalah : ";
    cout << hitung_keliling(p, l) << endl;
}

int main() {
    double panjang, lebar;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;

    tampilkan_luas(panjang, lebar);
    tampilkan_keliling(panjang, lebar);

    return 0;
}