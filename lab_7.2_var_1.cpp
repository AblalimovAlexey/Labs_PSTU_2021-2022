#include <iostream>
#include <stdarg.h>

using namespace std;

int summa(int a, ...) {
	int s = 0;
	va_list param;
	va_start(param, a);
	for (int i = 0; i < a; i++)
		s += va_arg(param, int);
	va_end(param);
	return s;
}

int main() {
	cout << summa(3, 11, 7, 4) << '\n';
	cout << summa(7, 13, 4, 24, 12, 18, 6, 0) << '\n';
	cout << summa(11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11) << '\n';
	return 0;
}