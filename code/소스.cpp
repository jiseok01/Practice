#include "Circle.h"
#include <iostream> 
using namespace std;

int main() {
	Circle donut;
	cout<< "donut ������" << donut.getArea() << endl;
	Circle pizza;
	pizza.radius= 10; 
	cout<< "pizza ������" << pizza.getArea() << endl;
}