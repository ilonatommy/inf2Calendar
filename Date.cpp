/*
 * Date.cpp
 *
 *  Created on: 2 lis 2017
 *      Author: adamg
 */
#include "Date.hpp"

const std::array<const int, 12> monthsLength = {
    		31, // Jan
    		28, // Feb
    		31, // Mar
    		30, // Apr
    		31, // May
    		30, // Jun
    		31, // Jul
    		31, // Aug
    		30, // Sep
    		31, // Oct
    		30, // Nov
    		31  // Dec
    	};

Date::Date(int _year, int _month, int _day)
{
	year=_year;
	month=_month;
	day=_day;
};
int dateToDays(const Date& date)
{
	int years = date.year - 1970;
	int months = date.month - 1;
	int days = date.day; //bo 1970.01.01 daje jeden dzieĹ„ - przyjmujÄ™ to za wartoĹ›Ä‡ poczÄ…tkowÄ… kalendarza
	days += 365 * years;
	if(date.month > 1)
		for(int i = 0; i < date.month - 1; i++)
			days += monthsLength[i];

	return days;
};

Date& Date::daysToDate(int days)
{
	int years = days / 365;
	days -= 365 * years;
	int months;
	for (months = 0; months < 12; months++)
	{
		if (days - monthsLength[months] > 0)
			days -= monthsLength[months];
		else break;
	}
	year = years + 1970;
	month = months + 1;
	day = days;

	return *this;
}

std::ostream& operator <<(std::ostream& os, const Date& d)
{
	std::ostringstream date_ (std::ostringstream::ate);
    date_<< d.year << "-";
	date_<< std::setfill('0') << std::setw(2) << d.month << "-";
	date_<< std::setfill('0') << std::setw(2) << d.day;
	std::cout << date_.str() << std::endl; //wypisuje zawartoœæ strumienia
	return os;
}

int Date::operator -(const Date& D)
{
	int days1 = dateToDays(*this);
	int days2 = dateToDays(D);
	if(days1 > days2)
	{
		return days1-days2;
	}
	else
		return days2-days1;
}

Date Date::operator -(const int& n)
{
	int days = dateToDays(*this);
	if(days > n)
	{
		Date subDate;
		subDate.daysToDate(days - n);

		return subDate;
	}
	else std::cout<<"error, range violation"<<std::endl;
	return 0;
}

Date operator +(int n, const Date& date)
{
	Date sumDates;
	int dDays = dateToDays(date);
	dDays+=n;
	sumDates.daysToDate(dDays);

	return sumDates;
}

Date& Date::operator +=(const int& n)
{
	int temp=dateToDays(*this);
	temp+=n;
	(*this).daysToDate(temp);
	return *this;
};

Date& Date::operator -=(const int& n)
{
	int days = dateToDays(*this);
		if(days > n)
		{
			(*this).daysToDate(days - n);

			return *this;
		}
		else std::cout<<"error, range violation"<<std::endl;
		return *this;
};

bool Date::operator ==(const Date& D)
{
	if(this == &D)
		return true;
	if(year!=D.year || month!=D.month || day!=D.day)
		return false;
	return true;
};

bool Date::operator !=(const Date& D)
{
	if(this == &D)
		return false;
	if(year==D.year && month==D.month && day==D.day)
		return false;
	return true;
};
