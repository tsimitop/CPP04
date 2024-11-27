#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called." << std::endl;
	this->_type = "WrongCat";
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called for " << this->_type << "." << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat: Copy constructor called." << std::endl;
	this->_type = other._type;
}

// Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat: Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
    _type = other._type;
	return (*this);
}

// Move constructor
WrongCat::WrongCat(WrongCat&& other) noexcept
{
	std::cout << "WrongCat: Move constructor called\n";
	this->_type = other._type;
	other._type = "Moved";
}

// Move assignment constructor
WrongCat& WrongCat::operator=(WrongCat&& other) noexcept
{
	std::cout << "WrongCat: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	this->_type = other._type;
	other._type = "Moved";
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meeeooooowwwwww\n";
}
