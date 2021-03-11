#include <iostream>

using namespace std;

int kuadrat(int x) {
    int y;
    y = x * x;
    return y;
}

void tampilkan(int a){
    cout << "Menampilkan dengan void\n";
    cout << a;
}

int main() {

    int input, hasil, a, b, hasil2;
    cout << "Masukkan nilai kuadrat dari : ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    return 0;
}