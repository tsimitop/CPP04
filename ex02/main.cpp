#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

//	TEST ALL CONSTRUCTOR KINDS
int main()
{
	std::cout << "\n--------------------CONSTRUCTORS-------------------\n";

	// // UNCOMMENT TO AVOID COMPILATION (:D)
	// Animal cantDeclare;
	// std::cout << cantDeclare.getType() << std::endl;

	std::cout << "0\n";
	Cat* Cat0 = new Cat;
	std::cout << "\n1\n";
	Cat* Cat1 = new Cat(*Cat0);
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
