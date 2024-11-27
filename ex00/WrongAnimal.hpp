#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
	
public:
	WrongAnimal();											//Default constructor
	WrongAnimal(const WrongAnimal& other);					//Copy constructor
	WrongAnimal& operator=(const WrongAnimal& other);		//Copy assignment operator
	WrongAnimal(WrongAnimal&& other) noexcept;				//Move constructor
	WrongAnimal& operator=(WrongAnimal&& other) noexcept;	//Move assigment operator
	virtual ~WrongAnimal();									//Default Destructor

	virtual std::string	getType() const;
	void	setType(std::string type);

	void	makeSound() const;	// cannot declare Wronganimal
};

#endif