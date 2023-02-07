#include <iostream>
#include <stdexcept>

double divide(int n) 
{
	if (n==0) 
	{
		throw std::invalid_argument("Cannot divide by zero.");
	}
    return 1024.0/n;
}

int main() 
{
	try 
	{
		int n;
		std::cout << "Enter a number: ";
		std::cin >> n;
		std::cout << "1024 / " << n << " = " << divide(n) << std::endl;
	} 
	catch (const std::invalid_argument& arg) 
	{
		std::cout << arg.what() << std::endl;
	}
    return 0;
}
