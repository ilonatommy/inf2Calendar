#include "DateFormatter.hpp"
class ComputerDateFormatter: public DateFormatter{
    virtual std::string format(const Date& d) const override;    
}
