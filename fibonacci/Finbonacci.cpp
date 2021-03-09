#include <iostream>
using namespace std;

int main() {
	int a, b, n, f_n;
	
	cout << "Program deret fibonacci \n";
	cout << "Masukkan nilai awal : ";
	cin >> a;
	cout << "Masukkan rentang nilai : ";
	cin >> b;
	cout << "Masukkan nilai ke-n : ";
	cin >> n;
	
	cout << a << " ";
	b += a;
	cout << b << " ";
	for(int i = 1; i <= n; i++) {
		f_n = b + a;
		a = b;
		b = f_n;
		
		cout << f_n << " "; 
	}
	
	return 0;
}
