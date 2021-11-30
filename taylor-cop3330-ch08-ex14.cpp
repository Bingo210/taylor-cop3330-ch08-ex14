/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Noah Taylor
 */

// Chapter 8 exercise 14

#include <iostream>
using namespace std;

/*
* It is possible to declare a non-reference function argument const, but since
* you can't modify values within the function, its only use would be
* something trivial such as printing to the console.
*/

void f(const int a, const int b);

int main()
{
	int num1 = 1;
	int num2 = 2;

	f(num1, num2);

	system("pause>0");
}

// Function to add constant integers
void f(const int a, const int b) {

	// Operations such as a += b are not possible
	int sum = a + b;
	cout << sum << endl;
}