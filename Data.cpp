#include "Date.hpp"
#include <iostream>

class Date{

	Date::Date(int _year = 1970, int _month = 1, int _day = 1)
	{
		year=_year;
		month=_month;
		day=_day;
	};

	static int dateToDays(const Date& date)
	{
		int years = date.year - 1970;
		int months = date.month - 1;
		int days = date.day - 1;
		days += 365 * years;
		days += monthsLength[date.month - 1] * months;
		
		return days;
	}


}


  
