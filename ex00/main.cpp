#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// // Test all constructors
// int	main(void)
// {
// 	Animal animal0;
// 	Animal animal1;
// 	Animal animal2 = animal0;
// 	Animal animal3;
// 	animal3 = animal0;
// 	Animal animal5 = std::move(animal0);
// 	Animal animal6;
// 	animal6 = std::move(animal1);

// 	std::cout << "Case 0:\t" << animal0.getType() << std::endl;
// 	std::cout << "Case 1:\t" << animal1.getType() << std::endl;
// 	std::cout << "Case 2:\t" << animal2.getType() << std::endl;
// 	std::cout << "Case 3:\t" << animal3.getType() << std::endl;
// 	std::cout << "Case 5:\t" << animal5.getType() << std::endl;
// 	std::cout << "Case 6:\t" << animal6.getType() << std::endl;
// }

// Subject test
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();	//will output the default-animal sound!
	i->makeSound();		//will output the cat sound!
	j->makeSound();		//will output the dog sound!
	delete meta;
	delete j;
	delete i;
	return (0);
}

// // Subject test WRONG-CLASSES
// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();		//will NOT output the cat sound!
// 	meta->makeSound();	//will output the default-animal sound!
// 	delete meta;
// 	delete i;
// 	return (0);
// }
