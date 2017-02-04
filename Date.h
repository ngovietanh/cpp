#ifndef Date_HPP 
#define Date_HPP 
 
 
#include <iostream> 
using namespace std; 
 
#include <stdio.h> 
#include <time.h> 
#include <ctype.h> 
#include "TemporalType.h" 
 
#define OR	|| 
#define AND	&& 
  
typedef	unsigned long	julTy; 
static const julTy century = 2000; 
  
 
class Date : public TemporalType 
{ 
private: 
 
	// The real member data 
	julTy Julian_days;		// number of Julian days 
 
	// Private member functions 
	void init(julTy days, julTy months, julTy years); // general init function 
	julTy j_days(julTy days, julTy months, julTy years) const; // calc #Julian days 
		// test functions 
	int year_test(int year) const;	// return year (999<year<=9999), or 0 
	int mm_test(int month) const;		// return month (1<=month<=12), or 0 
	int day_test(int day, int month, int year) const;// test if day in month and year 
  
public: 
	// Constructors 
	Date();								// default constructor = Date today 
	Date(const Date& d2);			// Copy constructor 
	Date(const julTy& days);					// construct Date from Julian days 
	Date(int days);						// construct Date from Julian days 
	Date(int day, int month, int year);	// Day, month, year 
 
 	// Selector functions 
	int ret_year() const;					// return year of this Date 
	int ret_month() const;					// return monthnumber (1..12) of this Date 
	int ret_day() const;					// return daynumber (1..31) of this Date 
	void jul_to_greg(julTy& d, julTy& m, julTy& y) const;	// give Gregorian Date  
 
 
	// Comparison functions 
	bool operator==(const Date& Date_2) const;	// compare Dates, TRUE if same days 
	bool operator!=(const Date& Date_2) const;	// compare Dates, TRUE if not the same day 
	bool operator>(const Date& Date_2) const;	// Date is later than Date_2 
	bool operator<(const Date& Date_2) const;	// Date is earlier than Date_2 
	bool operator>=(const Date& Date_2) const;	// Date is later than Date_2 
	bool operator<=(const Date& Date_2) const;	// Date is earlier than Date_2 
	 
	// Arithmetic functions 
	Date& operator=(const Date& Date_2);	// copy 
	Date operator+(const Date& d2);// add two values 
 
	Date operator+(int days) const;	// Add days to Date 
	Date operator+(const julTy& days) const;	//        '' 
	Date operator-(int days) const;	// subtract days from Date 
	Date operator-(const julTy& days) const;	//        '' 
 
	Date operator++();		// add 1 day to Date 
	Date operator--();		// subtract one day from Date 
	Date operator+=(const julTy& days);	// add days to this Date 
	Date operator+=(int days);	// add days to this Date 
	Date operator-=(const julTy& days);	// subtract days from this Date 
	Date operator-=(int days);	// subtract days from this Date 
	Date add_months(long months) const;	// return this Date + #months 
	Date add_quarter() const;		// return this Date + 3 months ahead 
	Date add_halfyear() const;		// return this Date + 6 months ahead 
	Date add_years(long years) const;	// return this Date + #years 
	Date sub_months(long months) const;	// return this Date - #months 
	Date sub_quarter() const;				// return this Date - 3 months ahead 
	Date sub_halfyear() const;				// return this Date - 6 months ahead 
	Date sub_years(long years) const;	// return this Date - #years 
	Date add_period(const julTy& days, const julTy& months = 0, const julTy &years = 0) const;			// return this Date plus a period of time 
	Date sub_period(julTy days, julTy months = 0, julTy years = 0) const;			// return this Date minus a period of time 
	long difference (const Date& Date_2) const;	// give difference in days between Date's 
	long operator - (const Date& d2) const; 
 
	 
	friend ostream& operator << (ostream& os, const Date& dat); 
 
}; 
 
#endif