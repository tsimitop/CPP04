#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// // Subject main on steroids
// int main()
// {
// 	int	counter = 6;
// 	int i = 0;

// 	std::cout << "\n--------------------CONSTRUCTORS-------------------\n";
// 	// const Animal* j = new Dog();
// 	// const Animal* k = new Cat();

// 	Animal* fillAnimal[counter];

// 	for (i = 0; i < (counter / 2); i++)
// 		fillAnimal[i] = new Dog();

// 	for (i = (counter / 2); i < counter; i++)
// 		fillAnimal[i] = new Cat();

// 	// //Fill brain with ideas if you like
// 	// std::cout << "\n-----------------------IDEAS-----------------------\n";
// 	// for (i = 0; i < (counter / 2); i++) //fill dog brain
// 	// 	dynamic_cast<Dog*>(fillAnimal[i])->putIdea("Dog ideas, bark bark\n");

// 	// for (i = (counter / 2); i < counter; i++) //fill cat brain
// 	// 	dynamic_cast<Cat*>(fillAnimal[i])->putIdea("Cat ideas, meow meow\n");

// 	// for (i = 0; i < (counter / 2); i++) //display dog's first idea
// 	// 	dynamic_cast<Dog*>(fillAnimal[i])->printFirstIdea();

// 	// for (i = (counter / 2); i < counter; i++) //display cat's first idea
// 	// 	dynamic_cast<Cat*>(fillAnimal[i])->printFirstIdea();

// 	std::cout << "\n-----------------------SOUNDS----------------------\n";
// 	for (i = 0; i < counter; i++)
// 		fillAnimal[i]->makeSound(); //Dog sound

// 	// j->makeSound();
// 	// k->makeSound();

// 	std::cout << "\n--------------------DESTRUCTORS--------------------\n";
// 	for (i = 0; i < counter; i++)
// 		delete fillAnimal[i]; //Cat sound

// 	// delete j;//should not create a leak
// 	// delete k;
// 	std::cout << "\n--------------------LEAK CHECK---------------------\n";
// 	return 0;
// }

//	TEST ALL CONSTRUCTOR KINDS
int main()
{
	std::cout << "\n--------------------CONSTRUCTORS-------------------\n";
	std::cout << "0\n";
	Dog* Dog0 = new Dog;
	std::cout << "\n1\n";
	// Dog* Dog1(Dog0); // Ideas will get overwritten
	// Dog Dog1(*Dog0); // Ideas will not get overwritten
	Dog* Dog1 = new Dog(*Dog0); // Deep copy
	std::cout << "\n2\n";
	Dog* Dog2 = new Dog;
	*Dog2 = *Dog1;
	std::cout << "\ntemp1\n";
	Dog* temp1 = new Dog;
	std::cout << "\ntemp2\n";
	Dog* temp2 = new Dog;
	std::cout << "\n3\n";
	Dog* Dog3 = new Dog(std::move(*temp1));
	std::cout << "\n4\n";
	Dog* Dog4 = new Dog;
	*Dog4 = std::move(*temp2);

	std::cout << "\n-----------------------SOUNDS----------------------\n";
	Dog0->makeSound();
	Dog1->makeSound();
	Dog2->makeSound();
	Dog3->makeSound();
	Dog4->makeSound();

	std::cout << "\n-----------------------IDEAS-----------------------\n";
	Dog0->putIdea("This Dog is 0\n");
	Dog1->putIdea("This Dog is 1\n");
	Dog2->putIdea("This Dog is 2\n");
	Dog3->putIdea("This Dog is 3\n");
	Dog4->putIdea("This Dog is 4\n");

	Dog0->printFirstIdea();
	Dog1->printFirstIdea();
	Dog2->printFirstIdea();
	Dog3->printFirstIdea();
	Dog4->printFirstIdea();

	std::cout << "--------------------DESTRUCTORS--------------------\n";
	delete Dog0;
	delete Dog1;
	delete Dog2;
	delete Dog3;
	delete Dog4;

	std::cout << "\nTemporary/moved.\n";
	delete temp1;
	delete temp2;

	return (0);
}
