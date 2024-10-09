/*
* Author: Chase McCluskey
* Date: 10/9/2024
* 
* description: finding summation of numbers from user input 
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int sum = 0;
	int input = 0;
	int sqaure = 0;
	double summation = 0;
	int n = 0;
	cout << "Enter numbers - Q to quit: ";
	do {
		cin >> input;
		if (input == cin.fail()) {
			break;
		}
		sum += input;
		sqaure = sqaure + pow(input, 2);
		n++;
	} 
	while (!cin.fail()); 
	n--;

	summation = sqaure;
	cout << summation << endl;
	summation -= (1 / n) * (double)(sum * sum);
	cout << summation << endl;
	summation = summation / (double)(n - 1);
	cout << summation << endl;
	summation = sqrt(summation);
	cout << summation << endl;
	//cout << "n = " << n << ", average = " << sum / n << ", standard deviation = " << summation << endl;
	//cout << "Press any key to continue... ";
}