virtual std::string format(const Date& d) const override
 {
    std::ostringstream date_ (std::ostringstream::ate);
    date_<< std::setfill('0') << std::setw(2) << d.day<<".";
    date_<< std::setfill('0') << std::setw(2) << d.month << ".";
    date_<< d.year;   
    std::string str=date_.str();
    return str
}
