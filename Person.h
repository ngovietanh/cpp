#ifndef Person_HPP
#define Person_HPP
#include "Date.h"
#include <string>
using namespace std;

class Person {
	public:
		string nam;
		Date dob;
		Date createD;
	public:
		Person(const string& name, const Date& DateofBirth);
		void print() const;
		int age() const;

};
#endif