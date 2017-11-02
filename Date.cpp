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

int dateToDays(const Date& date)
{
	int years = date.year - 1970;
	int months = date.month - 1;
	int days = date.day; //bo 1970.01.01 daje jeden dzieĹ„ - przyjmujÄ™ to za wartoĹ›Ä‡ poczÄ…tkowÄ… kalendarza
	days += 365 * years;
	days += monthsLength[date.month - 1] * months;
		
	return days;
};
	
Date& daysToDate(int day,Date& date)
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
	date.year = years + 1970;
	date.month = months;
	date.day = days;
		
	return date;
}
std::ostream& operator <<(std::ostream& os, const Date& d)
{
	std::ostringstream date_ (std::ostringstream::ate);
    	date_<< d.year << "-";
	date_<< std::setfill('0') << std::setw(2) << d.month << "-";
	date_<< std::setfill('0') << std::setw(2) << d.day;	
	cout << date_.str() << endl; //wypisuje zawartość strumienia
	return os;
	
}
	
Date Date::operator +(const Date& D)
{
	int days1 = dateToDays(*this);
	int days2 = dateToDays(D);
	Date sum;
	sum = daysToDate(days1+days2);
		
	return sum;
}

Date Date::operator -(const Date& D)
{
	int days1 = dateToDays(*this);
	int days2 = dateToDays(D);
	if(days1 > days2)
	{
		Date subDate = daysToDate(days1 - days2);
		
		return subDate;
	}
	else cout<<"error, range violation"<<endl;
	return 0;
}

Date Date::operator -(const int& n)
{
	int days = dateToDays(*this);
	if(days > n)
	{
		Date subDate = daysToDate(days - n);
		
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

Date& Date::operator +=(const int& n)
{
	int temp=dateToDays(*this);
	temp+=n;
	return daysToDate(temp);
};

Date& Date::operator -=(const int& n)
{
	int days = dateToDays(*this);
		if(days > n)
		{
			*this = daysToDate(days - n);
			
			return *this; 
		}
		else cout<<"error, range violation"<<endl;
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
