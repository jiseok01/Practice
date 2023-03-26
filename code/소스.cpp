#include "Circle.h"
#include <iostream> 
using namespace std;

int main() {
	Circle donut;
	cout<< "donut 면적은" << donut.getArea() << endl;
	Circle pizza;
	pizza.radius= 10; 
	cout<< "pizza 면적은" << pizza.getArea() << endl;
}