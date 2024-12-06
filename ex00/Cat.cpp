#include "Cat.hpp"

// Default constructor
Cat::Cat()
{
	std::cout << "Cat: Default constructor called." << std::endl;
	this->_type = "Cat";
}

// Destructor
Cat::~Cat()
{
	std::cout << "Cat: Destructor called for " << this->_type << "." << std::endl;
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat: Copy constructor called." << std::endl;
	this->_type = other._type;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat: Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

// Move constructor
Cat::Cat(Cat&& other) noexcept
{
	std::cout << "Cat: Move constructor called\n";
	this->_type = std::move(other._type);
	other._type.clear();
}

// Move assignment constructor
Cat& Cat::operator=(Cat&& other) noexcept
{
	std::cout << "Cat: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	this->_type = std::move(other._type);
	other._type.clear();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meeeooooowwwwww\n";
}
