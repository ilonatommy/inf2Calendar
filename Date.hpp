/*
 * Date.hpp
 *
 *  Created on: 13 Oct 2017
 *      Author: ilona
 */

#ifndef DATE_HPP_
#define DATE_HPP_

class Date{
	int year;
	int month;
	int day;

	Date(year = 1, month = 1, day = 1);
	~Date();

private:
	friend ostream& operator <<(ostream&, const Date&);
	friend istream& operator >>(oistream&, Date&);
	Date operator +();
	Date operator -();
	Date operator =();
	Date operator !=();
	Date operator ==();
};




#endif /* DATE_HPP_ */
