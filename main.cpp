#include "Animal.hpp"

// Test all constructors
int	main(void)
{
	Animal animal;
	Animal animal1("Testing");
	Animal animal2 = animal1;
	Animal animal3;
	Animal animal4("Copy");
	Animal animal5 = std::move(animal4);
	Animal animal6;
	animal6 = std::move(animal1);

	std::cout << "Case 0:\t" << animal.getType() << std::endl;
	std::cout << "Case 1:\t" << animal1.getType() << std::endl;
	std::cout << "Case 2:\t" << animal2.getType() << std::endl;
	std::cout << "Case 3:\t" << animal3.getType() << std::endl;
	std::cout << "Case 4:\t" << animal4.getType() << std::endl;
	std::cout << "Case 5:\t" << animal5.getType() << std::endl;
	std::cout << "Case 6:\t" << animal6.getType() << std::endl;
}
