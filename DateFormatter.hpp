/*
 * DateFormatter.hpp
 *
 *  Created on: 2 lis 2017
 *      Author: adamg
 */

#ifndef DATEFORMATTER_HPP_
#define DATEFORMATTER_HPP_
#include "Date.hpp"


class DateFormatter{
public:
  	virtual std::string format(const Date d) const=0;
};

#endif /* DATEFORMATTER_HPP_ */
