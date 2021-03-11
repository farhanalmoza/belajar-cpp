#include <iostream>
using namespace std;

// prototipe
double volume_kubus(double p = 1, double l = 1, double t = 1);

int main() {
	cout << "Volume kubus: " << volume_kubus(3, 4, 5) << endl;

	return 0;
}

double volume_kubus(double p, double l, double t) {
	return p * l * t;
}