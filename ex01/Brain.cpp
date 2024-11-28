#include "Brain.hpp"

#define brainColor "\033[31m";
#define quitColor "\033[0m";

// Default constructor
Brain::Brain()
{
	std::cout << brainColor;
	std::cout << "Brain: Default constructor called.\n";
	std::cout << quitColor;
}

// Destructor
Brain::~Brain()
{
	std::cout << brainColor;
	std::cout << "Brain: Destructor called.\n";
	std::cout << quitColor;
}

// Copy constructor
Brain::Brain(const Brain& other)
{
	std::cout << brainColor;
	std::cout << "Brain: Copy constructor called.\n";
	*this = other;
	std::cout << quitColor;
}

// Copy assignment operator
Brain& Brain::operator=(const Brain& other)
{
	std::cout << brainColor;
	std::cout << "Brain: Copy assignment operator called.\n";
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
	std::cout << quitColor;
}

// Move constructor
Brain::Brain(Brain&& other) noexcept
{
	std::cout << brainColor;
	std::cout << "Brain: Move constructor called\n";
	*this = other;
	std::cout << quitColor;
}

// Move assignment constructor
Brain& Brain::operator=(Brain&& other) noexcept
{
	std::cout << brainColor;
	std::cout << "Brain: Move assignment operator called\n";
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = other._ideas[i];
		other._ideas[i] = "Moved";
	}
	std::cout << quitColor;
	return (*this);
}
