virtual std::string format(const Date& d) const override
 {
    std::ostringstream date_ (std::ostringstream::ate);
    date_<< std::setfill('0') << std::setw(2) << Date->day<<".";
    date_<< std::setfill('0') << std::setw(2) << Date->month << ".";
    date_<< Date->year;    
    
    return date_;
}
