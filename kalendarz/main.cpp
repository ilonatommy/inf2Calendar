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
	Date data1(2001,03,20);
	Date data2(1970,01,23);								// Deklaracje obiektów testujących
	
	DateFormatter* formatComp = new ComputerDateFormatter;
	cout << "Wypisanie w formacie komputerowym" << endl;
	cout << formatComp->format(data)<< endl;			//Wypisanie w fromacie komputerowym
	
	DateFormatter* formatGerm = new GermanDateFormatter;
	cout << "Wypisanie w formacie niemieckim" << endl;
	cout << formatGerm->format(data) << endl;			//Wypisanie w formacie niemieckim
	
	cout << "Zwykłe wypisanie" << endl;
	cout << data1 << data << endl;
	
	data+=45;											//funkcja D+=n
	cout << "Działanie funkcji D+=n"<< endl;
	cout << data << endl;
	
	cout << "Działanie funkcji D-=n"<< endl;
	data-=40;											//funkcja D-=n
	cout << data << endl;
	
	cout<<"Działanie funkcji n+D i D+n"<<endl;
	cout << 40+data<< endl;								//funkcja n+D
	cout << data+40;
	
	cout << "Działanie funkcji D-n" << endl;
	cout << data-5 << endl;								//funkcja D-n
	
	cout << data2 << data1 << data;
	cout << "Działanie funkcji D-D" << endl;
	cout << data1-data << endl << data-data2<< endl << endl;	//funkcja D-D
	
	cout << "Działanie funkcji logicznych" << endl;
	cout << (data1==data) << endl;
	cout << (data1!=data) << endl;						//funkcje logiczne

	return 0;
