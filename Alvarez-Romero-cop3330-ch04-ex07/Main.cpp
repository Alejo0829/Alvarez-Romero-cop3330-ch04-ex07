#include "Header.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rafael Alvarez-Romero
 */

int main() {
	char op;
	char one, two, three, four, five, six, seven, eight, nine;
	string number1;
	string number2;
	double oper1, oper2, result;

	cout << "Enter a operation to calculate: ";
	op = getchar();

	cout << "Enter the first number to calculate: ";
	cin >> number1;
	cout << "Enter the second number to calculate: ";
	cin >> number2;

	if (number1 == "zero") {
		oper1 = 0;
	}
	else if (number1 == "one") {
		oper1 = 1;
	}
	else if (number1 == "two") {
		oper1 = 2;
	}
	else if (number1 == "three") {
		oper1 = 3;
	}
	else if (number1 == "four") {
		oper1 = 4;
	}
	else if (number1 == "five") {
		oper1 = 5;
	}
	else if (number1 == "six") {
		oper1 = 6;
	}
	else if (number1 == "seven") {
		oper1 = 7;
	}
	else if (number1 == "eight") {
		oper1 = 8;
	}
	else if (number1 == "nine") {
		oper1 = 9;
	}
	else if (number1 == "Zero") {
		oper1 = 0;
	}
	else if (number1 == "One") {
		oper1 = 1;
	}
	else if (number1 == "Two") {
		oper1 = 2;
	}
	else if (number1 == "Three") {
		oper1 = 3;
	}
	else if (number1 == "Four") {
		oper1 = 4;
	}
	else if (number1 == "Five") {
		oper1 = 5;
	}
	else if (number1 == "Six") {
		oper1 = 6;
	}
	else if (number1 == "Seven") {
		oper1 = 7;
	}
	else if (number1 == "Eight") {
		oper1 = 8;
	}
	else if (number1 == "Nine") {
		oper1 = 9;
	}
	else if (number1 == "0") {
		oper1 = 0;
	}
	else if (number1 == "1") {
		oper1 = 1;
	}
	else if (number1 == "2") {
		oper1 = 2;
	}
	else if (number1 == "3") {
		oper1 = 3;
	}
	else if (number1 == "4") {
		oper1 = 4;
	}
	else if (number1 == "5") {
		oper1 = 5;
	}
	else if (number1 == "6") {
		oper1 = 6;
	}
	else if (number1 == "7") {
		oper1 = 7;
	}
	else if (number1 == "8") {
		oper1 = 8;
	}
	else if (number1 == "9") {
		oper1 = 9;
	}
	else {
		cout << "Invalid number!";
	}
	

	if (number2 == "zero") {
		oper2 = 0;
	}
	else if (number2 == "one") {
		oper2 = 1;
	}
	else if (number2 == "two") {
		oper2 = 2;
	}
	else if (number2 == "three") {
		oper2 = 3;
	}
	else if (number2 == "four") {
		oper2 = 4;
	}
	else if (number2 == "five") {
		oper2 = 5;
	}
	else if (number2 == "six") {
		oper2 = 6;
	}
	else if (number2 == "seven") {
		oper2 = 7;
	}
	else if (number2 == "eight") {
		oper2 = 8;
	}
	else if (number2 == "nine") {
		oper2 = 9;
	}
	else if (number2 == "Zero") {
		oper2 = 0;
	}
	else if (number2 == "One") {
		oper2 = 1;
	}
	else if (number2 == "Two") {
		oper2 = 2;
	}
	else if (number2 == "Three") {
		oper2 = 3;
	}
	else if (number2 == "Four") {
		oper2 = 4;
	}
	else if (number2 == "Five") {
		oper2 = 5;
	}
	else if (number2 == "Six") {
		oper2 = 6;
	}
	else if (number2 == "Seven") {
		oper2 = 7;
	}
	else if (number2 == "Eight") {
		oper2 = 8;
	}
	else if (number2 == "Nine") {
		oper2 = 9;
	}
	else if (number2 == "0") {
		oper2 = 0;
	}
	else if (number2 == "1") {
		oper2 = 1;
	}
	else if (number2 == "2") {
		oper2 = 2;
	}
	else if (number2 == "3") {
		oper2 = 3;
	}
	else if (number2 == "4") {
		oper2 = 4;
	}
	else if (number2 == "5") {
		oper2 = 5;
	}
	else if (number2 == "6") {
		oper2 = 6;
	}
	else if (number2 == "7") {
		oper2 = 7;
	}
	else if (number2 == "8") {
		oper2 = 8;
	}
	else if (number2 == "9") {
		oper2 = 9;
	}
	else {
		cout << "Invalid number!";
	}


	if (op == '+') {
		result = oper1 + oper2;
	}
	else if (op == '-') {
		result = oper1 - oper2;
	}
	else if (op == '*') {
		result = oper1 * oper2;
	}
	else if (op == '/') {
		result = oper1 / oper2;
	}
	else {
		cout << "Invalid operation! Please try again with a different operation!";
	}
	cout << "The result of your operation is: " << result;
}

