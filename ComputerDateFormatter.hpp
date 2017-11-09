/*
 * ComputerDateFormatter.hpp
 *
 *  Created on: 2 lis 2017
 *      Author: adamg
 */

#ifndef COMPUTERDATEFORMATTER_HPP_
#define COMPUTERDATEFORMATTER_HPP_
#include "DateFormatter.hpp"
#include "Date.hpp"
class ComputerDateFormatter: public DateFormatter{
public:
    virtual std::string format(const Date& d) const;
};

#endif /* COMPUTERDATEFORMATTER_HPP_ */
