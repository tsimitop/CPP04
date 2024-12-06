#include "Animal.hpp"

#define animalColor "\033[35m";
#define quitColor "\033[0m";

// Default constructor
Animal::Animal() : _type("Animal")
{
	std::cout << animalColor;
	std::cout << "Animal: Default constructor called." << std::endl;
	std::cout << quitColor;
}

// Destructor
Animal::~Animal()
{
	std::cout << animalColor;
	std::cout << "Animal: Destructor called for " << this->_type << "." << std::endl;
	std::cout << quitColor;
}

// Copy constructor
Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout << animalColor;
	std::cout << "Animal: Copy constructor called." << std::endl;
	std::cout << quitColor;
}

// Copy assignment operator
Animal& Animal::operator=(const Animal& other)
{
	std::cout << animalColor;
	std::cout << "Animal: Copy assignment operator called." << std::endl;
	if (this == &other)
	{
		std::cout << quitColor;
		return (*this);
	}
	_type = other._type;
	std::cout << quitColor;
	return (*this);
}

// Move constructor
Animal::Animal(Animal&& other) noexcept
{
	std::cout << animalColor;
	std::cout << "Animal: Move constructor called\n";
	this->_type = std::move(other._type);
	other._type.clear();
	std::cout << quitColor;
}

// Move assignment constructor
Animal& Animal::operator=(Animal&& other) noexcept
{
	std::cout << animalColor;
	std::cout << "Animal: Move assignment operator called\n";
	if (this == &other)
	{
		std::cout << quitColor;
		return (*this);
	}
	this->_type = std::move(other._type);
	other._type.clear();
	std::cout << quitColor;
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
	std::cout << animalColor;
	std::cout << "Animal sound\n";
	std::cout << quitColor;
}
