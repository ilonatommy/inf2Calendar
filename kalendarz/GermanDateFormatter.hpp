/*
 * GermanDateFormatter.hpp
 *
 *  Created on: 2 lis 2017
 *      Author: adamg
 */

#ifndef GERMANDATEFORMATTER_HPP_
#define GERMANDATEFORMATTER_HPP_

#include "DateFormatter.hpp"
#include "Date.hpp"
class GermanDateFormatter: public DateFormatter
{
public:
    virtual std::string format(const Date d) const;
};



#endif /* GERMANDATEFORMATTER_HPP_ */
