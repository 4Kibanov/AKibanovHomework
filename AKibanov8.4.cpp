#include <iostream>

class Function 
{
public:
	virtual double Calculate(double x) = 0;
	virtual void Print(double x) = 0;
};

class Ellipse : public Function 
{
public:
	double Calculate(double x) {return x*x;}
	void Print(double x) {std::cout << "Ellipse: " << Calculate(x) << std::endl;}
};

class Hiperbola : public Function 
{
public:
	double Calculate(double x) {return 1.0/x;}
	void Print(double x) {std::cout << "Hiperbola: " << Calculate(x) << std::endl;}
};

class Parabola : public Function 
{
public:
	double Calculate(double x) {return x*x*x;}
	void Print(double x) {std::cout << "Parabola: " << Calculate(x) << std::endl;}
};

void PrintFunction(Function& f,double x) 
{
	f.Print(x);
}

int main() 
{
	double x;
	std::cout << "Enter a value for x: ";
	std::cin >> x;
	Ellipse e;
	Hiperbola h;
	Parabola p;

	Function *ptr1 = &e;
	Function *ptr2 = &h;
	Function *ptr3 = &p;
	
	ptr1->Print(x);
	ptr2->Print(x);
	ptr3->Print(x);

	PrintFunction(e,x);
	PrintFunction(h,x);
	PrintFunction(p,x);

	return 0;
}
