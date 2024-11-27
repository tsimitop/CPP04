#ifndef WRINGCAT_H
#define WRINGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();										//Default constructor
	WrongCat(const WrongCat& other);				//Copy constructor
	WrongCat& operator=(const WrongCat& other);		//Copy assignment operator
	WrongCat(WrongCat&& other) noexcept;				//Move constructor
	WrongCat& operator=(WrongCat&& other) noexcept;	//Move assigment operator
	~WrongCat();									//Default Destructor

	void	makeSound() const;
};

#endif