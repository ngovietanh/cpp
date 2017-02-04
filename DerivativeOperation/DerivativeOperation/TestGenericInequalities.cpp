#include "GenericInequalities.h"
#include <iostream>
using namespace std;

int main(){
	long dA = 12334; long dB = 2; long dC = -3;
	cout << "\n Max and Min of these numbers: " << endl;
	cout << "Max value is " << Max<long>(dA, dB, dC) << endl;
	cout << "Min value is " << Min<long>(dA, dB, dC) << endl;
	getchar();
	return 0;
}
