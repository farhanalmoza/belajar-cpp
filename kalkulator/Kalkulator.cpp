#include <iostream>
using namespace std;

int main() {
    float a, b, hasil;
    char aritmatika;
    
    cout << "selamat datang" << endl;
    
	// masukkan input user
	cout << "masukkan nilai pertama : ";
	cin >> a;
	cout << "pilih operator : ";
	cin >> aritmatika;
	cout << "masukkan nilai kedua : ";
	cin >> b;
	
	//operasi
	switch(aritmatika) {
		case '+':
			hasil = a + b;
			break;
		case '-':
			hasil = a - b;
			break;
		case '/':
			hasil = a / b;
			break;
		case '*':
			hasil = a * b;
			break;
		default:
			"oprator salah";
	}
	
	if(aritmatika == '+' || aritmatika == '-' || aritmatika == '/' || aritmatika == '*') {
		cout << "hasil = " << hasil;
	} else {
		cout << "operator salah";
	}
    
    return 0;
}
