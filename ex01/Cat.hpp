#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();									//Default constructor
	Cat(const Cat& other);					//Copy constructor
	Cat& operator=(const Cat& other);		//Copy assignment operator
	Cat(Cat&& other) noexcept;				//Move constructor
	Cat& operator=(Cat&& other) noexcept;	//Move assigment operator
	~Cat();									//Default Destructor

	void	makeSound() const;
};

#endif