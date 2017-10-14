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
	Date(const Date & D);
	~Date();

	friend ostream& operator <<(ostream&, const Date&);
	friend istream& operator >>(istream&, Date&);
	friend Date operator -(const Date & D, int n);	//friend aby mo¿liwe by³y operacje D+n oraz n+D
	Date operator -(const Date & D);
	Date & operator =(const Date & D);
	bool operator== (const Date& D);
	bool operator!=(const Date& D);

};




#endif /* DATE_HPP_ */
