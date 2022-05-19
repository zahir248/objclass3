//MuhammadZahiruddinBinMustaza
//B032110210
//1/2

#include <iostream>
#include "Parallelogram.h"
using namespace std;

void main() {

    double height;
    double width;
    double area;
    double perimeter;

    Parallelogram zahir;

    cout << "Enter height = ";
    cin >> height;

    cout << "Enter width = ";
    cin >> width;

    zahir.setData(height, width);

    cout << "\n\nThe area of parallelogram is " << zahir.calcArea();
    cout << "\nThe perimeter of parallelogram is " << zahir.calcPerimeter();
}