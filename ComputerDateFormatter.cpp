/*
 * ComputerDateFormatter.cpp
 *
 *  Created on: 2 lis 2017
 *      Author: adamg
 */
#include "ComputerDateFormatter.hpp"
 std::string ComputerDateFormatter::format(const Date& d) const
 {
    std::ostringstream date_ (std::ostringstream::ate);
    date_<< 'd.getYear' << "-";
        date_<< std::setfill('0') << std::setw(2) << d.getMonth << "-";
        date_<< std::setfill('0') << std::setw(2) << d.getDay;
        std::string str=date_.str();
        return str;
 }



