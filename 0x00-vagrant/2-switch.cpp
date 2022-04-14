#include <iostream>
using namespace std; 

int main() {
	int i, j, option;
	int sum, diff, pro, quo;
	cout << "enter two numbers ";
	cin >> i >> j;
	cout << "\n";
	cout << "******MENU******\n";
	cout << "1. Addition\n";
	cout << "2. Substraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "Select the menu.";
	cout << "\n";
	cin >> option;
	switch (option) {
		case 1:
		cout << "Addition function is envoked!\n";
		sum = i + j;
		cout << "The sum is " << sum;
		break;
		case 2:
		cout << "Substraction function is envoked!\n";
		diff = i - j;
		cout << "The difference is " << diff;
		break;
		case 3: 
		cout << "Multiplication functin is envoked!\n";
		pro = i * j;
		cout << "The product is " << pro;
		break;
		case 4:
		cout << "Division function is envoked!\n";
		quo = i / j;
		cout << "The quotient is " << quo;
		break;
		default: 
		cout << "Please enter numbers between 1 - 4 to select the menu\n";
	} 

 return 0;
}