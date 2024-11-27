#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Test all constructors
// int	main(void)
// {
// 	Animal animal;
// 	// Animal animal1("Testing");
// 	Animal animal2 = animal;
// 	Animal animal3;
// 	// Animal animal4("Copy");
// 	Animal animal5 = std::move(animal);
// 	Animal animal6;
// 	animal6 = std::move(animal);

// 	std::cout << "Case 0:\t" << animal.getType() << std::endl;
// 	// std::cout << "Case 1:\t" << animal1.getType() << std::endl;
// 	std::cout << "Case 2:\t" << animal2.getType() << std::endl;
// 	std::cout << "Case 3:\t" << animal3.getType() << std::endl;
// 	// std::cout << "Case 4:\t" << animal4.getType() << std::endl;
// 	std::cout << "Case 5:\t" << animal5.getType() << std::endl;
// 	std::cout << "Case 6:\t" << animal6.getType() << std::endl;
// }

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	delete meta;
// 	delete j;
// 	delete i;
// 	return (0);
// }

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete meta;
	delete i;
	return (0);
}
