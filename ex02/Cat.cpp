#include "Cat.hpp"
#include "Brain.hpp"

#define catColor "\033[34m"
#define quitColor "\033[0m"

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
	if(_brain)
		delete _brain;
	std::cout << quitColor;
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << catColor;
	std::cout << "Cat: Copy constructor called.\n";
	_type = other._type;
	if (other._brain)
		_brain = new Brain(*other._brain);
	else
		_brain = nullptr;
	std::cout << quitColor;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other)
{
	std::cout << catColor;
	std::cout << "Cat: Copy assignment operator called.\n";
	if (this == &other)
	{
		std::cout << quitColor;
		return *this;
	}

	// Deep copy
	if(_brain)
		delete _brain;
	if (other._brain)
		_brain = new Brain(*other._brain);
	else
		_brain = nullptr;
	_type = other._type;

	std::cout << quitColor;
	return *this;
}

// Move constructor
Cat::Cat(Cat&& other) noexcept
{
	std::cout << catColor;
	std::cout << "Cat: Move constructor called\n";
	this->_type = std::move(other._type);
	this->_brain = new Brain (std::move(*other._brain));
	other._type.clear();
	std::cout << quitColor;
}

// Move assignment constructor
Cat& Cat::operator=(Cat&& other) noexcept
{
	std::cout << catColor;
	std::cout << "Cat: Move assignment operator called\n";
	if (this == &other)
	{
		std::cout << quitColor;
		return (*this);
	}
	if(_brain)
		delete _brain;
	this->_type = std::move(other._type);
	this->_brain = new Brain (std::move(*other._brain));
	other._type.clear();
	std::cout << quitColor;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << catColor;
	std::cout << "Meeeooooowwwwww\n";
	std::cout << quitColor;
}

void	Cat::putIdea(std::string idea)
{
	_brain->setIdeas(idea);
}

void	Cat::printFirstIdea() const
{
	_brain->printFirstIdea();
}
