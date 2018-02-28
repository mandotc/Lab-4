// Armando Torres-Cornejo
//CPSC 121 Lab 4 
//<02/24/18>

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

// creating function prototypes 
void hello();
void menu();
void printBetween(int a, int b);
void isPrime(int num);
void leastCommonDenominator(int a, int b);
void squaredOpposite(double& n);

void main()
{//defining variables 
	int a, b,num;
	double n;
	char ans;
//creating program loop
	do {
//calling menu display function
		menu();
//getting answer from user 
		cin >> ans;
		if (ans == 'a')
		{
			hello();
		}
		else if (ans == 'b')
		{
			cout << "Enter two intergers to print between :";
			cin >> a;
			cout << "and :";
			cin >> b;
			printBetween(a, b);
		}
		else if (ans == 'c')
		{
			cout << "Enter an interger to test if prime(should be a positive integer): ";
			cin >> num;
			isPrime(num);
		}
		else if (ans == 'd')
		{
			cout << "Enter two intergers to find the LCD of : " ;
			cin >> a;
			cout << "and :";
			cin >> b;
			leastCommonDenominator(a, b);
		}
		else if (ans == 'e')
		{
			cout << "Enter an interger to calculate the squared opposite :" << endl;
			cin >> n;
			squaredOpposite(n);
		}
//if answer is invalid
		else cout << "INVALID CHICE" << endl;
//asks user if they want to reurun the program
		cout << "Would you like tho rerun the program? ('y' or 'n')" << endl;
		cin >> ans;
	} while (ans == 'y');
}//end main

// program functions
void menu()
{
	cout << "**************************************" << endl;
	cout << " Which function would you like to run?" << endl;

	cout << "  a) hello()" << endl;

	cout << "  b) printBetween()" << endl;

	cout << "  c) isPrime()" << endl;

	cout << "  d) leastCommonDenominator()" << endl;

	cout << "  e) squaredOpposite()" << endl;
	cout << "**************************************" << endl;
}

void hello()
{
	cout << " Hello, world!" << endl;
}

void printBetween(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		cout << i << endl;
	}
}

void isPrime(int num)
{
	bool flag = true;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			flag = false;
			break;
		}
	}
	if (flag == true)
		cout << " True" << endl;
	else
		cout << " False" << endl;
}

void leastCommonDenominator(int a, int b)
{
	int x = a * b;
	if (x%a == 0 && x%b == 0)
	{
		cout << x << endl;
	}
}

void squaredOpposite(double& n)
{
	int square, oppo;
	oppo = -1;
	square= n*n;
	cout << square * oppo << endl;
}