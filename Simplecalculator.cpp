#include <iostream>

using namespace std;

int main() {

char operation;

double num1, num2;

cout << "Enter first number : "<<endl;

cin >> num1;

cout << "Enter an operation (+, -, *, /,%): "<<endl;

cin >> operation;

cout << "Enter second numbers: "<<endl;

cin >> num2;

switch (operation) {

case '+':

cout << "Result = " << num1 + num2 <<endl;

break;

case '-':

cout << "Result = " << num1 - num2 <<endl;

break;

case '*':

cout << "Result = " << num1 * num2 <<endl;

break;

case '/':

if (num2 != 0) {

cout << "Result = " << num1 / num2 << endl;

} else {

cout << "Invalid Operation" << endl;

}

break;

default:

cout << "Invalid operation." << endl;

}

return 0;
