 virtual std::string format(const Date& d) const override
 {
    std::ostringstream date_ (std::ostringstream::ate);
    date_<< d.year << "-";
    date_<< std::setfill('0') << std::setw(2) << d.month << "-";
    date_<< std::setfill('0') << std::setw(2) << d.day;
    
    return date_;
 }
