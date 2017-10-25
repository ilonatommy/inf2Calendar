
#ifndef DATEFORMATTER_HPP_
#define DATEFORMATTER_HPP_
#include <iostream>
using namespace std;
class DateFormatter{
  	virtual std::string format(const Date& d) const = 0;  
}


#endif /* DATEFORMATTER_HPP_ */
