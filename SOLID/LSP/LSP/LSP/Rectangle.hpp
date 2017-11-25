#ifndef SHAPES_HPP_
#define SHAPES_HPP_
#include "Shape.hpp"

/*class Square: public Shape{
private:
	double _width;
	double _height;

public:
	virtual double getHeight() const override { return _height; }
	double getWidth() const override { return _width; }
	void setWidth(double width) override { _width = width; _height = width; }
	void setHeight(double height) override { _height = height; _width = height; }
};
*/
class RectangleA {
private:
	double _width;
	double _height;

public:
	virtual void setWidth(double w) { _width = w; }
	virtual void setHeight(double h) { _height = h; }
	double getHeight() const { return _height; }
	double getWidth() const { return _width; }
};

class SquareB {
private:
	double _size;
	
public:
	RectangleA rectangle;
	virtual void setSize(double s) { _size = s; }
	double getSize() const { return _size; }
};


class Rectangle {
private:
	double _width;
	double _height;

public:
	virtual void setWidth(double w) { _width = w; } //virtual - ¿eby mog³y siê odwo³ywac do metod potomka Square
	virtual void setHeight(double h) { _height = h; }
	double getHeight() const { return _height; }
	double getWidth() const { return _width; }
};

class Square : public Rectangle {
public:
	virtual void setWidth(double w) {
		Rectangle::setWidth(w);
		Rectangle::setHeight(w);
	}
	virtual void setHeight(double h) {
		Rectangle::setHeight(h);
		Rectangle::setWidth(h);
	}
};
#endif
