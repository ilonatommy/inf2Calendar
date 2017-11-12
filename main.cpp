/*
 * main.cpp
 *
 *  Created on: 5 lis 2017
 *      Author: adamg
 */
#include "Date.hpp"
#include "DateFormatter.hpp"
#include "GermanDateFormatter.hpp"
#include "ComputerDateFormatter.hpp"

int main()
{
	Date date;
	DateFormatter* formatComp = new ComputerDateFormatter;
	std::cout << date;
	std::cout << formatComp->format(date);
	return 0;
}
