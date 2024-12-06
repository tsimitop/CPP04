#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string	_type;
	
public:
	Animal();									//Default constructor
	Animal(const Animal& other);				//Copy constructor
	Animal& operator=(const Animal& other);		//Copy assignment operator
	Animal(Animal&& other) noexcept;			//Move constructor
	Animal& operator=(Animal&& other) noexcept;	//Move assigment operator
	virtual ~Animal();							//Default Destructor

	virtual std::string	getType() const;
	void	setType(std::string type);

	virtual void	makeSound() const;
};

#endif