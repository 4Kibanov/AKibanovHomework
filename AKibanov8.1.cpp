#include <iostream>
#include <string>

class Person 
{
	public:
	Person(std::string name,int age,char gender,int weight):name_(name),age_(age),gender_(gender),weight_(weight) {}

	void setName(std::string name) {this->name_=name;}
	std::string getName() const {return name_;}

	void setAge(int age) {this->age_=age;}
	int getAge() const {return age_;}

	void setGender(char gender) {this->gender_=gender;}
	char getGender() const {return gender_;}

	void setWeight(int weight) {this->weight_=weight;}
	int getWeight() const {return weight_;}

	protected:
	std::string name_;
	int age_;
	char gender_;
	int weight_;
};

class Student : public Person 
{
	public:
	Student(std::string name,int age,char gender,int weight,std::string pass_type): Person(name,age,gender,weight),pass_type_(pass_type) {}

	void setPassType(std::string pass_type) {this->pass_type_=pass_type;}
	std::string getPassType() const {return pass_type_;}

	private:
	std::string pass_type_;
};

class Teacher : public Person 
{
	public:
	Teacher(std::string name,int age,char gender,int weight,std::string pass_type,std::string department_type): Person(name,age,gender,weight),pass_type_(pass_type),department_type_(department_type) {}

	void setPassType(std::string pass_type) {this->pass_type_=pass_type;}
	std::string getPassType() const {return pass_type_;}
	void setDepartmentType(std::string pass_type) {this->department_type_=pass_type;}
	std::string getDepartmentType() const {return department_type_;}

	private:
	std::string pass_type_;
	std::string department_type_;
};

int main() 
{
	Person p("Ivan Smirnov", 15, 'M', 50);
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Age: " << p.getAge() << std::endl;
	std::cout << "Gender: " << p.getGender() << std::endl;
	std::cout << "Weight: " << p.getWeight() << std::endl;
	std::cout << std::endl;

	Student s("Artyom Ivanov", 18, 'M', 70, "Student Pass");
	std::cout << "Name: " << s.getName() << std::endl;
	std::cout << "Age: " << s.getAge() << std::endl;
	std::cout << "Gender: " << s.getGender() << std::endl;
	std::cout << "Weight: " << s.getWeight() << std::endl;
	std::cout << "Pass Type: " << s.getPassType() << std::endl;
	std::cout << std::endl;

	Teacher t("Ekaterina Popova", 35, 'F', 55, "Teacher Pass", "of Foreign Languages");
	std::cout << "Name: " << t.getName() << std::endl;
	std::cout << "Age: " << t.getAge() << std::endl;
	std::cout << "Gender: " << t.getGender() << std::endl;
	std::cout << "Weight: " << t.getWeight() << std::endl;
	std::cout << "Pass Type: " << t.getPassType() << std::endl;
	std::cout << "Department: " << t.getDepartmentType() << std::endl;
	std::cout << std::endl;

	int choice;
	std::string name;int age;char gender;int weight;int pass_type;int department_type;
	std::cout << "Select class (1: Person, 2: Student, 3: Teacher): ";
	std::cin >> choice;
	if (choice==1) {
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter age: ";
	std::cin >> age;
	std::cout << "Enter gender (M or F): ";
	std::cin >> gender;
	std::cout << "Enter weight: ";
	std::cin >> weight;
	std::cout << "Finished";
	}
	else if (choice==2) {
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter age: ";
	std::cin >> age;
	std::cout << "Enter gender (M or F): ";
	std::cin >> gender;
	std::cout << "Enter weight: ";
	std::cin >> weight;
	std::cout << "Enter pass type: ";
	std::cin >> pass_type;
	std::cout << "Finished";
	}
	else if (choice==3) 
	{
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter age: ";
	std::cin >> age;
	std::cout << "Enter gender (M or F): ";
	std::cin >> gender;
	std::cout << "Enter weight: ";
	std::cin >> weight;
	std::cout << "Enter pass type: ";
	std::cin >> pass_type;
	std::cout << "Enter department type: ";
	std::cin >> department_type;
	std::cout << "Finished";
	}
	return 0;
}
