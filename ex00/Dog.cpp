#include "Dog.hpp"

// Default constructor
Dog::Dog()
{
	std::cout << "Dog: Default constructor called." << std::endl;
	this->_type = "Dog";
}

// Destructor
Dog::~Dog()
{
	std::cout << "Dog: Destructor called for " << this->_type << "." << std::endl;
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog: Copy constructor called." << std::endl;
	this->_type = other._type;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog: Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
    _type = other._type;
	return (*this);
}

// Move constructor
Dog::Dog(Dog&& other) noexcept
{
	std::cout << "Dog: Move constructor called\n";
	// this->_type = other._type;
	this->_type = std::move(other._type);
	other._type.clear();
}

// Move assignment constructor
Dog& Dog::operator=(Dog&& other) noexcept
{
	std::cout << "Dog: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	this->_type = std::move(other._type);
	other._type.clear();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "bark bark\n";
}
