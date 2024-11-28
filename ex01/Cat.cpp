#include "Cat.hpp"
#include "Brain.hpp"

#define catColor "\033[34m";
#define quitColor "\033[0m";

// Default constructor
Cat::Cat()
{
	std::cout << catColor;
	std::cout << "Cat: Default constructor called.\n";
	_type = "Cat";
	_brain = new Brain();
	std::cout << quitColor;
}

// Destructor
Cat::~Cat()
{
	std::cout << catColor;
	std::cout << "Cat: Destructor called.\n";
	delete _brain;
	std::cout << quitColor;
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << catColor;
	std::cout << "Cat: Copy constructor called.\n";
	*this = other;
	std::cout << quitColor;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other)
{
	std::cout << catColor;
	std::cout << "Cat: Copy assignment operator called.\n";
	if (this == &other)
		return (*this);
    _type = other._type;
	return (*this);
	std::cout << quitColor;
}

// Move constructor
Cat::Cat(Cat&& other) noexcept
{
	std::cout << catColor;
	std::cout << "Cat: Move constructor called\n";
	this->_type = other._type;
	other._type = "Moved";
	std::cout << quitColor;
}

// Move assignment constructor
Cat& Cat::operator=(Cat&& other) noexcept
{
	std::cout << catColor;
	std::cout << "Cat: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	this->_type = other._type;
	other._type = "Moved";
	return (*this);
	std::cout << quitColor;
}

void	Cat::makeSound() const
{
	std::cout << catColor;
	std::cout << "Meeeooooowwwwww\n";
	std::cout << quitColor;
}
