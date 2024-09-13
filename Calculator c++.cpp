#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	string operation;
	double n1, n2;
	
	cout << "Enter First Number: ";
	cin >> n1;
	cout << "Enter Operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter Second Number: ";
	cin >> n2;
	
	if (operation == "+") {
		cout << n1 + n2;
	}
	else if (operation == "-") {
			cout << n1 - n2;
	}
	else if (operation == "*") {
			cout << n1 * n2;
	}
	else if (operation == "/") {
			cout << n1 / n2;
	} 
	else {
		cout << "Unknown Error 404";
	}
	return 0;
}
