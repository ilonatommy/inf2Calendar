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
	
Date::Date(int _year = 1970, int _month = 1, int _day = 1)
{
	year=_year;
	month=_month;
	day=_day;
};

int Date::dateToDays(const Date& date)
{
	int years = date.year - 1970;
	int months = date.month - 1;
	int days = date.day; //bo 1970.01.01 daje jeden dzień - przyjmuję to za wartość początkową kalendarza
	days += 365 * years;
	days += monthsLength[date.month - 1] * months;
		
	return days;
}
	
Date& Date::daysToDate(int days)
{
	int years = days / 365;
	days -= 365 * years;
	int months;
	for(months = 1; months <= 12; months++)
	{
		if(days - monthsLength[months] > 0)
			days -= monthsLength[months];
		else break;
	}
	Date date;
	date.year = years + 1970;
	date.month = months;
	date.day = days;
		
	return &date;
}
	
Date Date::operator +(const Date& D)
{
	int days1 = dateToDays(this);
	int days2 = dateToDays(D);
	Date sum;
	sum = daysToDate(days1+days2);
		
	return sum;
}

Date Date::operator -(const Date& D)
{
	int days1 = dateToDays(this);
	int days2 = dateToDays(D);
	if(days1 > days2)
	{
		int sub = days1 - days2;
		Date subDate = daysToDate(sub);
		
		return subDate;
	}
	else cout<<"error, range violation"<<endl;
	return 0;
}

Date operator +(int& n, const Date& D)
{
	Date sumDates;
	int dDays = dateToDays(D);
	int sumDays = dDays + n;
	sumDates = daysToDate(sumDays);
	
	return sumDates;
}
