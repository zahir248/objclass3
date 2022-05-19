//MuhammadZahiruddinBinMustaza
//B032110210
//1/2

#ifndef Rectangle_H
#define Rectangle_H

class Rectangle {

private:

	double height;
	double width;

public:

	Rectangle();
	~Rectangle();
	double setData(double, double);
	double calcArea();
	double calcPerimeter();
};
#endif
