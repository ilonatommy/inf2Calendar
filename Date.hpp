 /*
 * Date.hpp
 *
 *  Created on: 13 Oct 2017
 *      Author: ilona
 */

#ifndef DATE_HPP_
#define DATE_HPP_
#include <iostream> 
#include <sstream>
#include <iomanip>
#include <string>

//nie stosujemy using namespace

class Date{
private:
	int year;
	int month;
	int day;
	int dateToDays(const Date& date)

public:
	Date(int _year = 1970,int _month = 1,int _day = 1);
	Date(const Date & D);

	friend std::ostream& operator <<(std::ostream& os, const Date&);
	friend int dateToDays(const Date& date);
	friend Date& daysToDate(int days, Date& date);
	friend virtual DateFormatter::std::string format(const Date& d) const;
	
	friend Date operator +(int& n, const Date& D);	//friend aby moÂżliwe byÂły operacje n+D i D+n
	Date operator +(const Date& D); //D+D
	
	Date operator -(const Date& D); //D-D
	Date operator -(const int& n); //D-n
	
	Date& operator +=(const int& n);
	Date& operator -=(const int& n);
	
	bool operator== (const Date& D);
	bool operator!=(const Date& D);

};


#endif /* DATE_HPP_ */
