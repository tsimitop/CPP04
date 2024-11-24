#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string	_type;
	
public:
	Animal();										//Default constructor
	Animal(std::string name);						//Parameterized constructor
	Animal(const Animal& other);				//Copy constructor
	Animal& operator=(const Animal& other);		//Copy assignment operator
	Animal(Animal&& other) noexcept;			//Move constructor
	Animal& operator=(Animal&& other) noexcept;	//Move assigment operator
	~Animal();									//Default Destructor


	std::string	getType();
	void		setType(std::string type);
};

#endif