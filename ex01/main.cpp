#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void	leaks(void)
{
	system("leaks exec");
}

// int main()
// {
// 	// atexit(&leaks);
// 	int	counter = 6;
// 	int i = 0;

// 	const Animal* j = new Dog();
// 	const Animal* k = new Cat();

// 	Animal* fillAnimal[counter];

// 	for (i = 0; i < (counter / 2); i++)
// 		fillAnimal[i] = new Dog();

// 	// int n = 0;	//Fill brain with ideas if you like
// 	// for (i = 0; i < (counter / 2); i++) //fill dog brain
// 	// {
// 	// 	for (n = 0; n < 100; n++)
// 	// 		fillAnimal[i]->setIdeas("Dog ideas, bark bark\n");
// 	// }


// 	for (i = (counter / 2); i < counter; i++)
// 		fillAnimal[i] = new Cat();

// 	for (i = 0; i < counter; i++)
// 		fillAnimal[i]->makeSound(); //Dog sound

// 	for (i = 0; i < counter; i++)
// 		delete fillAnimal[i]; //Cat sound

// 	j->makeSound();
// 	k->makeSound();

// 	delete j;//should not create a leak
// 	delete k;
// 	return 0;
// }

//	TEST ALL CONSTRUCTOR KINDS
int main()
{
	std::cout << "\n--------------------CONSTRUCTORS-------------------\n";
	// atexit(&leaks);
	std::cout << "0\n";
	Cat* Cat0 = new Cat;
	std::cout << "\n1\n";
	// Cat* Cat1(Cat0); // Ideas will get overwritten
	// Cat Cat1(*Cat0); // Ideas will not get overwritten
	Cat* Cat1 = new Cat(*Cat0); // Deep copy
	std::cout << "\n2\n";
	Cat* Cat2 = new Cat;
	*Cat2 = *Cat1;
	std::cout << "\ntemp1\n";
	Cat* temp1 = new Cat;
	std::cout << "\ntemp2\n";
	Cat* temp2 = new Cat;
	std::cout << "\n3\n";
	Cat* Cat3 = new Cat(std::move(*temp1));
	std::cout << "\n4\n";
	Cat* Cat4 = new Cat;
	*Cat4 = std::move(*temp2);

	std::cout << "\n-----------------------SOUNDS----------------------\n";
	Cat0->makeSound();
	Cat1->makeSound();
	Cat2->makeSound();
	Cat3->makeSound();
	Cat4->makeSound();

	std::cout << "\n-----------------------IDEAS-----------------------\n";
	Cat0->putIdea("This Cat is 0\n");
	Cat1->putIdea("This Cat is 1\n");
	Cat2->putIdea("This Cat is 2\n");
	Cat3->putIdea("This Cat is 3\n");
	Cat4->putIdea("This Cat is 4\n");

	Cat0->printFirstIdea();
	Cat1->printFirstIdea();
	Cat2->printFirstIdea();
	Cat3->printFirstIdea();
	Cat4->printFirstIdea();

	std::cout << "--------------------DESTRUCTORS--------------------\n";
	delete Cat0;
	delete Cat1;
	delete Cat2;
	delete Cat3;
	delete Cat4;

	std::cout << "\nTemporary/moved.\n";
	delete temp1;
	delete temp2;

	return (0);
}
