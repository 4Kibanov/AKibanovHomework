#include <iostream>

class Ore 
{
	public:
	Ore(int quantity): quantity_(quantity) {}

	int quantity() const {return quantity_;}
	void set_quantity(int quantity) {quantity_=quantity;}

	private:
	int quantity_;
};

class Pickaxe 
{
	public:
	Pickaxe(int strength,int durability,int price): strength_(strength),durability_(durability),price_(price) {}

	int strength() const {return strength_;}
	int durability() const {return durability_;}
	int price() const {return price_;}

	int MineOre(Ore& ore) 
	{
	if (durability_<=0) 
	{
		std::cout<<"Pickaxe is broken, cannot mine ore."<<std::endl;
		return 0;
	}

	int ore_mined=strength_;
    durability_--;
    ore.set_quantity(ore.quantity()-ore_mined);
    return ore_mined;
	}

	private:
	int strength_;
	int durability_;
	int price_;
};

int main() 
{
	Pickaxe pickaxe(5,3,100);
	Ore ore(20);
	
	std::cout << "Pickaxe strength: " << pickaxe.strength() << std::endl;
	std::cout << "Pickaxe durability: " << pickaxe.durability() << std::endl;
	std::cout << "Pickaxe price: " << pickaxe.price() << std::endl;
	std::cout << "Ore quantity: " << ore.quantity() << std::endl;
	
	int ore_mined=pickaxe.MineOre(ore);
	std::cout << "Ore mined: " << ore_mined << std::endl;
	std::cout << "Pickaxe durability: " << pickaxe.durability() << std::endl;
	std::cout << "Ore quantity: " << ore.quantity() << std::endl;
	std::cout << "Finished\n\n";
	
	Pickaxe pickaxe2(5,0,100);
	Ore ore2(20);
	
	std::cout << "Pickaxe strength: " << pickaxe2.strength() << std::endl;
	std::cout << "Pickaxe durability: " << pickaxe2.durability() << std::endl;
	std::cout << "Pickaxe price: " << pickaxe2.price() << std::endl;
	std::cout << "Ore quantity: " << ore2.quantity() << std::endl;
	
	int ore2_mined=pickaxe2.MineOre(ore2);
	std::cout << "Ore mined: " << ore2_mined << std::endl;
	std::cout << "Pickaxe durability: " << pickaxe2.durability() << std::endl;
	std::cout << "Ore quantity: " << ore2.quantity() << std::endl;
	std::cout << "The ore was not mined\n\n";

	return 0;
}
