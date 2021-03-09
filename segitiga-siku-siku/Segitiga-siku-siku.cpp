#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Masukkan panjang pola: ";
	cin >> n;
	
	// siku siku kiri bawah
//	cout << "Pola 1 \n";
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	cout << endl;
	
	// siku siku kiri atas	
//	cout << "Pola 2 \n";
//	for(int i = n; i >= 1; i--) {
//		for(int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	cout << endl;

	// siku siku kanan atas
//	cout << "Pola 3 \n";
//	for(int i = 1; i <= n; i++) {
//		for(int k = 1; k < i; k++) {
//			cout << " ";
//		}
//		
//		for(int j = n; j >= i; j--) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	cout << endl;
	
	// siku siku kanan bawah
//	cout << "Pola 4 \n";
//	for(int i = 1; i <= n; i++) {
//		for(int k = n; k > i; k--) {
//			cout << " ";
//		}
//		
//		for(int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}

	cout << "Pola 2 \n";
	for(int i = n; i >= 1; i--) {
		for(int j = 1; j <= i; j++) {
			cout << "*";
		}
		
		for(int k = i+1; k <= n; k++) {
			cout << " ";
		}
		for(int k = i+1; k <= n; k++) {
			cout << " ";
		}
		
		for(int l = 1; l <= i; l++) {
			cout << "*";
		}
		cout << endl;
	}


	for(int i = 2; i <= n; i++) {		
		for(int j = 1; j <= i; j++) {
			cout << "*";
		}
		
		for(int k = n; k >= i+1; k--) {
			cout << " ";
		}
		for(int k = n; k >= i+1; k--) {
			cout << " ";
		}
		
		for(int l = 1; l <= i; l++) {
			cout << "*";
		}
		cout << endl;
	}
		
	return 0;
}

































