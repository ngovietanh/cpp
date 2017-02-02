#include "Inequalities.h"
#include <iostream>
using namespace std;

int main(){
	double d1, d2, d3;
	cout << "Enter first number " << endl;
	cin >> d1;
	cout << "Enter second number " << endl;
	cin >> d2;
	cout << "Enter third number " << endl;
	cin >> d3;
	cout << "Min value" << Min(d1,d2,d3) << endl;
	cout << "Max value " << Max(d1,d2,d3) << endl;
	cin.get();
	return 0;
}