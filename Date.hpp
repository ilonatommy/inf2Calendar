/*
 * Date.hpp
 *
 *  Created on: 2 lis 2017
 *      Author: adamg
 */

#ifndef DATE_HPP_
#define DATE_HPP_

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <array>

//nie stosujemy using namespace

class Date{
private:
	int year;
	int month;
	int day;


public:
	Date(int _year=1970, int _month=1, int _day=1);

	inline int getDay(const Date& d){return day;};
	inline int getMonth(const Date& d){return month;};
	inline int getYear(const Date& d){return year;};
	friend std::ostream& operator <<(std::ostream& os, const Date&);
	friend int dateToDays(const Date& date);
	Date& daysToDate(int days);

	friend Date operator +(int& n, const Date& D);	//friend aby mo¿liwe by³y operacje n+D i D+n
	Date operator +(const Date& D); //D+D

	Date operator -(const Date& D); //D-D
	Date operator -(const int& n); //D-n

	Date& operator +=(const int& n);
	Date& operator -=(const int& n);

	bool operator== (const Date& D);
	bool operator!=(const Date& D);


};




#endif /* DATE_HPP_ */
