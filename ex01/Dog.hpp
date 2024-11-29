#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	_brain;
public:
	Dog();									//Default constructor
	Dog(const Dog& other);					//Copy constructor
	Dog& operator=(const Dog& other);		//Copy assignment operator
	Dog(Dog&& other) noexcept;				//Move constructor
	Dog& operator=(Dog&& other) noexcept;	//Move assigment operator
	~Dog();									//Default Destructor

	void	makeSound() const;
	// void	
};

#endif