/*
 * GermanDateFormatter.cpp
 *
 *  Created on: 2 lis 2017
 *      Author: adamg
 */
#include "GermanDateFormatter.hpp"
std::string GermanDateFormatter::format(const Date d) const {
	std::ostringstream date_;
	date_ << std::setfill('0') << std::setw(2) <<d.getDay();
	date_<<".";
	date_ << std::setfill('0') << std::setw(2) << d.getMonth();
	date_<<".";
	date_ << d.getYear();
	std::string str = date_.str();
	return str;
}


