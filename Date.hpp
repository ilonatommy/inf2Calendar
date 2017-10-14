/*
 * Date.hpp
 *
 *  Created on: 13 Oct 2017
 *      Author: ilona
 */

#ifndef DATE_HPP_
#define DATE_HPP_
#include <iostream>
using namespace std;
class Date{
private:
	int year;
	int month;
	int day;
public:
	Date(year = 1970, month = 1, day = 1);
	Date(const Date & d);
	~Date();


	friend ostream& operator <<(ostream&, const Date&);
	friend istream& operator >>(oistream&, Date&);
	Date operator +();
	Date operator -();
	Date operator =();
	bool operator== (const Date& D);
	bool operator!=(const Date& D);

};




#endif /* DATE_HPP_ */
