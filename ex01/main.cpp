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

// 	// const Animal* j = new Dog();
// 	// const Animal* k = new Cat();
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

// 	// j->makeSound();
// 	// k->makeSound();

// 	// delete j;//should not create a leak
// 	// delete k;
// 	return 0;
// }

//	TEST ALL CONSTRUCTOR KINDS
int main()
{
	// atexit(&leaks);
	// int	counter = 5;
	// int i = 0;

	// const Animal* j = new Dog();
	// const Animal* k = new Cat();
	// Animal* fillAnimal[5];
	// fillAnimal[i] = new Dog;

	std::cout << "0\n";
	Dog* dog0 = new Dog;
	std::cout << "1\n";
	Dog* dog1 = dog0;
	std::cout << "2\n";
	Dog* dog2;
	dog2 = dog1;
	Dog* temp1 = new Dog;
	Dog* temp2 = new Dog;
	std::cout << "3\n";
	Dog* dog3 = std::move(temp1);
	std::cout << "4\n";
	Dog* dog4;
	dog4 = std::move(temp2);

	Dog dog5;

dog0->makeSound();
dog1->makeSound();
dog2->makeSound();
dog3->makeSound();
dog4->makeSound();

dog0->putIdea("This dog is 0\n");
dog1->putIdea("This dog is 1\n");
dog2->putIdea("This dog is 2\n");
dog3->putIdea("This dog is 3\n");
dog4->putIdea("This dog is 4\n");

dog0->printFirstIdea();
dog1->printFirstIdea();
dog2->printFirstIdea();
dog3->printFirstIdea();
dog4->printFirstIdea();

	std::cout << "0\n";
		delete dog0;
	// std::cout << "1\n";
	// 	delete dog1;
	// std::cout << "2\n";
	// 	delete dog2;
	std::cout << "3\n";
		delete dog3;
	std::cout << "4\n";
		delete dog4;



	// for (i = 0; i < (counter / 2); i++)
	// 	fillAnimal[i] = new Dog();

	// int n = 0;	//Fill brain with ideas if you like
	// for (i = 0; i < (counter / 2); i++) //fill dog brain
	// {
	// 	for (n = 0; n < 100; n++)
	// 		fillAnimal[i]->setIdeas("Dog ideas, bark bark\n");
	// }


	// for (i = (counter / 2); i < counter; i++)
	// 	fillAnimal[i] = new Cat();

	// for (i = 0; i < counter; i++)
	// 	fillAnimal[i]->makeSound(); //Dog sound

	// for (i = 0; i < counter; i++)
	// 	delete fillAnimal[i]; //Cat sound

	// j->makeSound();
	// k->makeSound();

	// delete j;//should not create a leak
	// delete k;
	return 0;
}
