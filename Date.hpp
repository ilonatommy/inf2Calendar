<<<<<<< HEAD
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


=======
 /*
 * Date.hpp
 *
 *  Created on: 13 Oct 2017
 *      Author: ilona
 */

#ifndef DATE_HPP_
#define DATE_HPP_
#include <iostream> 

//nie stosujemy using namespace

class Date{
private:
	int year;
	int month;
	int day;
	
	int monthLenghts[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
public:
	Date(year = 1970, month = 1, day = 1);
	Date(const Date & D);
	~Date();

	friend std::ostream& operator <<(std::ostream& os, const Date&);
	
	friend Date operator +(int& n, const Date& D);	//friend aby mo¿liwe by³y operacje n+D i D+n
	Date operator +(const Date& D); //D+D
	
	Date operator -(const Date& D); //D-D
	Date operator -(const int& n); //D-n
	
	Date& operator +=(const Date& D);
	Date& operator -=(const Date& D);
	Date& operator =(const Date& D);
	
	bool operator== (const Date& D);
	bool operator!=(const Date& D);

};
>>>>>>> branch 'master' of https://github.com/ilonatommy/inf2Calender.git


#endif /* DATE_HPP_ */
