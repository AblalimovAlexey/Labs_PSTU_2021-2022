#include <iostream>
#include <string>

int main() {
	std::string input = "";
	std::string in = "";
	std::cin >> input;
	for (int iter = input.size() - 1; iter >= 0; iter--) {
		in += input[iter];
	}
	if (input == in)
		std::cout << "Yes";
	else
		std::cout << "No";
	return 0;
}