#include <iostream>
#include <sstream>

int main() 
{
	std::string input;
	std::cout << "Enter an expression for the calculator (one operation):\n";
	std::getline(std::cin,input);
	std::stringstream s(input);
	int a,b;
	char z;
	s >> a >> z >> b;
	if (!s) 
	{
		std::cout << "Invalid input." << std::endl;
		return 1;
	}
	int result;
	if (z=='+') 
	{
		result=a+b;
	}
	else if (z=='-') 
	{
		result=a-b;
	}
	else if (z=='*') 
	{
		result=a*b;
	}
	else if (z=='/') 
	{
		if (b==0)
		{
			std::cout << "Division by zero error." << std::endl;
			return 1;
		}
		result=a/b;
	}
	else
	{
		std::cout << "Invalid operator." << std::endl;
		return 1;
	}
	std::cout << "Result:" << result << std::endl;
	return 0;
}
