#include<iostream>
#include "Complex.h"
#include<string>

using namespace std;

int main() {

	float real_1,real_2, img_1, img_2, prod;
	string sum, diff;

	cout << "Gathering input for 1st complex number..." << endl;
	cout << "Enter real part: " << endl;
	cin >> real_1;
	cout << "Enter imaginary part: " << endl;
	cin >> img_1;
	cout << "Gathering input for 2nd complex number..." << endl;
	cout << "Enter real part: " << endl;
	cin >> real_2;
	cout << "Enter imaginary part: " << endl;
	cin >> img_2;
	

	//Complex obj1;
	Complex obj1(real_1, img_1, real_2, img_2);
	
	cout << "Sum, Diff, Prod of entered numbers are: " << endl;
	sum = obj1.calc_sum();
	diff = obj1.calc_diff();
	prod = obj1.calc_prod();
	cout << "Sum: " << sum << endl;
	cout << "Diff: " << diff << endl;
	cout<< "Product: "<<prod << endl;

	return 0;

	
}