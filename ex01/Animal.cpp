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
		return (*this);
    _type = other._type;
	return (*this);
	std::cout << quitColor;
}

// Move constructor
Animal::Animal(Animal&& other) noexcept : _type(other._type)
{
	std::cout << animalColor;
	std::cout << "Animal: Move constructor called\n";
	other._type = "Moved";
	std::cout << quitColor;
}

// Move assignment constructor
Animal& Animal::operator=(Animal&& other) noexcept
{
	std::cout << animalColor;
	std::cout << "Animal: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	_type = other._type;
	other._type = "Moved";
	return (*this);
	std::cout << quitColor;
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
