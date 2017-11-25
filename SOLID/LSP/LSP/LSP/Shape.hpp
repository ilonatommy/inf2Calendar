#pragma once
class Shape {
public:
	virtual double getWidth() const = 0;
	virtual double getHeight() const = 0;
	virtual void setWidth(double) = 0;
	virtual void setHeight(double) = 0;
};
