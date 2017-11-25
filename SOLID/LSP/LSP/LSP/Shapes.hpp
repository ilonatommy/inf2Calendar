#ifndef SHAPES_HPP_
#define SHAPES_HPP_

class Rectangle {
private:
	double _width;
	double _height;

public:
	virtual void setWidth(double w) { _width = w; }
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