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
	Date data;
	GermanDateFormatter data1;
	std::cout<<data;
	std::cout<<data1.format(data);
	return 0;
}



