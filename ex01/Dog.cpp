#include "Dog.hpp"

#define dogColor "\033[32m"
#define quitColor "\033[0m"

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
	// *this = other;
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << quitColor;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& other)
{
	std::cout << dogColor;
	std::cout << "Dog: Copy assignment operator called.\n";
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
Dog::Dog(Dog&& other) noexcept
{
	std::cout << dogColor;
	std::cout << "Dog: Move constructor called\n";
	// this->_type = other._type;
	this->_type = std::move(other._type);
	other._type.clear();
	std::cout << quitColor;
}

// Move assignment constructor
Dog& Dog::operator=(Dog&& other) noexcept
{
	std::cout << dogColor;
	std::cout << "Dog: Move assignment operator called\n";
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

void	Dog::makeSound() const
{
	std::cout << dogColor;
	std::cout << "bark bark\n";
	std::cout << quitColor;
}

void	Dog::putIdea(std::string idea)
{
	_brain->setIdeas(idea);
}

void	Dog::printFirstIdea()
{
	_brain->printFirstIdea();
}
