 virtual std::string format(const Date& d) const override
 {
    std::ostringstream date_ (std::ostringstream::ate);
    date_<< Date->year << "-";
    date_<< std::setfill('0') << std::setw(2) << Date->month << "-";
    date_<< std::setfill('0') << std::setw(2) << Date->day;
    
    return date_;
 }
