#include <iostream>
#include <string>

class Car 
{
public:
	Car(const std::string &company,const std::string &model): company_(company),model_(model) {}

protected:
	std::string company_;
	std::string model_;
};

class PassengerCar : virtual public Car 
{
public:
	PassengerCar(const std::string &company,const std::string &model): Car(company,model) 
	{
    std::cout << "Passenger car: " << company_ << " " << model_ << std::endl;
	}
};

class Bus : virtual public Car 
{
public:
	Bus(const std::string &company,const std::string &model): Car(company,model) 
	{
	std::cout << "Bus: " << company_ << " " << model_ << std::endl;
	}
};

class Minivan : public PassengerCar, public Bus 
{
	public:
	Minivan(const std::string &company,const std::string &model): 
	Car(company,model),
    PassengerCar(company,model),
    Bus(company,model) 
	{
    std::cout << "Minivan: " << company_ << " " << model_ << std::endl;
	}
};

int main() 
{
	PassengerCar passengercar("Nissan","A");
	Bus bus("Mercedes","B");
	Minivan minivan("Toyota","C");
	return 0;
}
