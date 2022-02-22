#include <iostream>
#include <ctime>
using namespace std;

void view(int* arr,int n) {
    cout << '\n';
	for (int* i = arr; i != arr + 60*n; ++i) {
		if ((i - arr)%60 == 0)
			cout << "(";
		if (*i == 0)
			cout << ",";
		else
			cout << *i;
		if ((i - arr)%60 == 59)
			cout << ")";
	}
}

int cinInt() {
	char a = 'q';
	while ((int)a - 48 <= 0 or (int)a - 48 >= 9) {
		cout << "Enter the number: ";
		cin >> a;
	}
	return (int)a - 48;
}

int main() {
    srand(time(NULL));
	int arr[3][60];
	int* a = &arr[0][0];
	for (int* a = &arr[0][0]; a - &arr[0][0] < 180; ++a)
	    *a = rand()%10;
	view(a, 3);
	return 0;
}