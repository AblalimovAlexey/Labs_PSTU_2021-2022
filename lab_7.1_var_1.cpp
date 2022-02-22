#include <iostream>
#include <complex>

void plus(int a, int b) {
	std::cout << a + b << '\n';
}

void plus(std::complex <double> a, std::complex <double> b) {
	std::cout << a + b << '\n';
}

int main() {
	std::complex <double> a(1.0, 2.0);
	std::complex <double> b(2.0, 1.0);
	plus(a, b);
	int c = 1;
	int d = 2;
	plus(c, d);
	return 0;
}