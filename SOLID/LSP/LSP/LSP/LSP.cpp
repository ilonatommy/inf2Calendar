// LSP.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//WYJAŚNIENIE:
/* 
funkcja doSomething traktuje tak samo prostokat i kwadrat, przy czym settery w kwadracie nie pozwalają funkcji do Something na przypisanie 
róźnych wartości do wysokości i szerokości, więc ostatni setter ustawia wszystkie boki na tą samą wartość. Kwadrat nie potrzebuje aż 
dwóch getterów i setterów, tak samo nie potrzebuje dwóch wartości opisujących jego wielkość. Kod jest poprawny matematycznie, 
ale uzytkownik używający go może napisać funkcję doSomething, która nie będzie działała zgodnie z jego oczekiwaniami, z powodu konstrukcji 
klas Square i Rectangle. Naprawa:
1)pozbywamy się dziedziczenia między Rectangle a Square
2)dodajemy pole Rectangle do Square traktując Rectangle jako rozszerzenie Square (lub budujemy interfejs IShape łączący klasy Rectangle i 
Square)
*/

#include "stdafx.h"
#include <cassert>
#include "Rectangle.hpp"

bool doSomething(RectangleA& r) {
	r.setWidth(5);
	r.setHeight(4);
	return (r.getWidth() * r.getHeight() == 20);
}

int main() {
	SquareB s = SquareB();

	assert(doSomething(s.rectangle));

	return 0;
}
