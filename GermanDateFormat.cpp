virtual std::string format(const Date& d) const override
 {
    std::ostringstream date_ (std::ostringstream::ate);
    date_<< std::setfill('0') << std::setw(2) << d.getDay<<".";
    date_<< std::setfill('0') << std::setw(2) << d.getMonth << ".";
    date_<< d.getYear;   
    std::string str=date_.str();
    return str
}
