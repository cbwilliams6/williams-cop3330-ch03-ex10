#include "std_lib_facilities.h"

void addition(double number1, double number2) {
    cout << "The result of adding " << number1 << " and " << number2 << " is: " << (number1 + number2);
}

void subtraction(double number1, double number2) {
    cout << "The result of subtracting " << number1 << " and " << number2 << " is: " << (number1 - number2);
}

void multiplication(double number1, double number2) {
    cout << "The result of multiplying " << number1 << " and " << number2 << " is: " << (number1 * number2);
}

void division(double number1, double number2) {
    cout << "The result of dividing " << number1 << " and " << number2 << " is: " << (number1 / number2);
}

int main() {
    String operation;
    double number1, number2;

    cout << "Enter the type of operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    if (operation == "+" || operation == "plus" || operation == "add" || operation == "addition") {
        addition(number1, number2);
    }
    else if (operation == "-" || operation == "minus" || operation == "subtract" || operation == "subtraction") {
        subtraction(number1, number2);
    }
    else if (operation == "*" || operation == "mul" || operation == "multiply" || operation == "multiplication") {
        multiplication(number1, number2);
    }
    else if (operation == "/" || operation == "div" || operation == "divide" || operation == "division") {
        division(number1, number2);
    }
    else {
        cout << "Invalid operation.";
    }
}