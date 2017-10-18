/*
 * Date.hpp
 *
 *  Created on: 11 paź 2017
 *      Author: ilonat
 */

#ifndef DATE_HPP_
#define DATE_HPP_
class Date {
public:
	Date();
	virtual ~Date();


	Date operator +(Date& date);
	Date operator -(Date& date);
	bool operator ==(Date date1, Date date2);
	bool operator != ();
	Date operator =(Date& date);

	friend Date operator << ();
	friend Date operator >>();

};




#endif /* DATE_HPP_ */
