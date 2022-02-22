#include <iostream>
#include <ctime>

using namespace std;

void del(int* arr, int* n, int k) {
	for (int i = k - 1; i < *n; ++i) {
		arr[i] = arr[i + 1];
	}
	--*n;
}

void add(int* arr, int* n, int k, int a) {
	++n;
	for (int i = n - 1; i > k; --i) {
		arr[i] = arr[i - 1];
	}
	arr[k] = a;
}

void view(int* arr) {
	cout << '\n';
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
}

int main() {
	srand(time(NULL));
	int n = 0;
	cout << "Enter start massive size: ";
	cin >> n;
	int* arr = new int [n];
	
	for (int i = 0; i < n; ++i) {
		arr[i] = rand() % 100;
	}
	view(arr);

	del(arr, &n, 3);
	view(arr);

    for (int i = n - 1; i >= 0; --i) {
		if (arr[i] % 2 == 0) {
			add(arr, &n, i + 1, 0);
		}
	}
	view(arr);
	
	delete [] arr;
	return 0;
}