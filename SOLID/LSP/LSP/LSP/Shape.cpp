class Shape {
	const virtual int getWidth() const = 0;
	const virtual int getHeight() const = 0;
	virtual void setWidth() = 0;
	virtual void setHeight() = 0;
};