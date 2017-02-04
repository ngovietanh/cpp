#include "Person.h" 

Person::Person(const string& name, const Date& DateofBirth){
	nam = name;
	dob = DateofBirth;
	createD = Date();
}

void Person::print() const {
	cout << " Name: " << nam << "Date of birth " << dob << "  Age " << age() << endl;
} 

int Person::age() const {
	return int( double ( (Date() - dob ) / 365 ) );
}