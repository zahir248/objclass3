//MuhammadZahiruddinBinMustaza
//B032110210
//1/2

#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() {
	height = 0;
	width = 0;
}

double Rectangle::setData(double z, double m) {
	height = z;
	width = m;

	return (height, width);
}

Rectangle::~Rectangle() {}

double Rectangle::calcArea() {
	return(height * width);
}

double Rectangle::calcPerimeter() {
	return(2 * (height + width));
}