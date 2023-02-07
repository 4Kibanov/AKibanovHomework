#include <iostream>
#include <cmath>

const double pi=3.1415926535;

class Figure 
{
public:
	virtual double area() = 0;
};

class Parallelogram : public Figure 
{
public:
	Parallelogram(double a,double b,double angle) : a(a),b(b),angle(angle) {}
	double area() {return a*b*sin(angle*pi/180); }

private:
	double a,b,angle;
};

class Rectangle : public Parallelogram 
{
public:
	Rectangle(double a,double b) : Parallelogram(a,b,90) {}
};

class Square : public Rectangle 
{
public:
	Square(double a) : Rectangle(a,a) {}
};

class Rhombus : public Parallelogram 
{
public:
	Rhombus(double a,double angle) : Parallelogram(a,a,angle) {}
};

class Circle : public Figure 
{
public:
	Circle(double r) : r(r) {}
	double area() {return pi*r*r; }

private:
	double r;
};

int main() 
{
	Figure *f;
	int v1; int v2; int v3; int v4;
	std::cout << "Enter the value of the first side of the parallelogram: ";
	std::cin >> v1;
	std::cout << "Enter the value of the second side of the parallelogram: ";
	std::cin >> v2;
	std::cout << "Enter the value of the angle of the rhombus (in degrees): ";
	std::cin >> v3;
	std::cout << "Enter the radius of the circle: ";
	std::cin >> v4;
	Rectangle r(v1, v2);
	Square s(v1);
	Rhombus h(v1, v3);
	Circle c(v4);
	std::cout << "Results:" << std::endl;
	f = &r;
	std::cout << "Rectangle area: " << f->area() << std::endl;
	f = &s;
	std::cout << "Square area: " << f->area() << std::endl;
	f = &h;
	std::cout << "Rhombus area: " << f->area() << std::endl;
	f = &c;
	std::cout << "Circle area: " << f->area() << std::endl;
	return 0;
}
