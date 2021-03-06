/*
 * main.cpp
 *
 *  Created on: 27 lis 2017
 *      Author: Jakub
 */

#include <iostream>
#include <vector>
#include <memory>

const double PI=3.14159265358;
class Shape{
public:
	virtual double area()const =0;
};

class Square:public Shape{
private:
	double _side;
public:
	Square(double side){_side = side;};
	double area() const override{
		return _side*_side;
	};
};
class Circle:public Shape{
private:
	double _radius;
public:
	Circle(double radius){_radius = radius;}
	double area() const override{
		return PI*_radius*_radius;
	};
};

class AreaCalculator{
public:
	static double calculateArea(const std::vector<const Shape*>& shapes){
		double totalArea=0;
		for(const auto shape_ptr:shapes){
			totalArea += (*shape_ptr).area();
		}
		return totalArea;
	};
};

int main(){
	std::vector<std::unique_ptr<Shape>> v;
	v.push_back(std::make_unique<Circle>(1.0));
	v.push_back(std::make_unique<Square>(1.0));

	std::vector<const Shape*> v_raw;
	for(const auto& ptr:v){
		v_raw.push_back(ptr.get());
	}
	std::cout<<"total area= "<<AreaCalculator::calculateArea(v_raw)<<std::endl;
}


