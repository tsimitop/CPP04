#include "Animal.hpp"

// Default constructor
Animal::Animal() : _type("Animal")
{
	std::cout << "Animal: Default constructor called." << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal: Destructor called for " << this->_type << "." << std::endl;
}

// Copy constructor
Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout << "Animal: Copy constructor called." << std::endl;
}

// Copy assignment operator
Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal: Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

// Move constructor
Animal::Animal(Animal&& other) noexcept
{
	std::cout << "Animal: Move constructor called\n";
	this->_type = std::move(other._type);
	other._type.clear();
}

// Move assignment constructor
Animal& Animal::operator=(Animal&& other) noexcept
{
	std::cout << "Animal: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	this->_type = std::move(other._type);
	other._type.clear();
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	_type = type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}
