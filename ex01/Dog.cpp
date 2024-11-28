#include "Dog.hpp"

#define dogColor "\033[32m";
#define quitColor "\033[0m";

// Default constructor
Dog::Dog()
{
	std::cout << dogColor;
	std::cout << "Dog: Default constructor called.\n";
	_type = "Dog";
	_brain = new Brain();
	std::cout << quitColor;
}

// Destructor
Dog::~Dog()
{
	std::cout << dogColor;
	std::cout << "Dog: Destructor called.\n";
	delete _brain;
	std::cout << quitColor;
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << dogColor;
	std::cout << "Dog: Copy constructor called.\n";
	*this = other;
	std::cout << quitColor;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& other)
{
	std::cout << dogColor;
	std::cout << "Dog: Copy assignment operator called.\n";
	if (this == &other)
		return (*this);
    _type = other._type;
	return (*this);
	std::cout << quitColor;
}

// Move constructor
Dog::Dog(Dog&& other) noexcept
{
	std::cout << dogColor;
	std::cout << "Dog: Move constructor called\n";
	this->_type = other._type;
	other._type = "Moved";
	std::cout << quitColor;
}

// Move assignment constructor
Dog& Dog::operator=(Dog&& other) noexcept
{
	std::cout << dogColor;
	std::cout << "Dog: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	this->_type = other._type;
	other._type = "Moved";
	return (*this);
	std::cout << quitColor;
}

void	Dog::makeSound() const
{
	std::cout << dogColor;
	std::cout << "bark bark\n";
	std::cout << quitColor;
}
