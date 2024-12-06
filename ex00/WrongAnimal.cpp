#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor called." << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called for " << this->_type << "." << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
}

// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

// Move constructor
WrongAnimal::WrongAnimal(WrongAnimal&& other) noexcept
{
	std::cout << "WrongAnimal: Move constructor called\n";
	this->_type = std::move(other._type);
	other._type.clear();
}

// Move assignment constructor
WrongAnimal& WrongAnimal::operator=(WrongAnimal&& other) noexcept
{
	std::cout << "WrongAnimal: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	this->_type = std::move(other._type);
	other._type.clear();
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	_type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound\n";
}
