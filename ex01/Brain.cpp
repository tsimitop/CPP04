#include "Brain.hpp"

#define brainColor "\033[31m"
#define quitColor "\033[0m"

// Default constructor
Brain::Brain()
{
	std::cout << brainColor;
	std::cout << "Brain: Default constructor called.\n";
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
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
	{
		std::cout << quitColor;
		return (*this);
	}
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << quitColor;
	return (*this);
}

// Move constructor
Brain::Brain(Brain&& other) noexcept
{
	std::cout << brainColor;
	std::cout << "Brain: Move constructor called\n";
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = std::move(other._ideas[i]);
		// other._ideas[i] = "Moved";
		other._ideas[i].clear(); // Optional: Clear moved-from state
	}
	std::cout << quitColor;
}

// Move assignment operator
Brain& Brain::operator=(Brain&& other) noexcept
{
	std::cout << brainColor;
	std::cout << "Brain: Move assignment operator called\n";
	if (this == &other)
	{
		std::cout << quitColor;
		return (*this);
	}
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = std::move(other._ideas[i]);
		// this->_ideas[i] = other._ideas[i];
		// other._ideas[i] = "Moved";
		other._ideas[i].clear();
	}
	std::cout << quitColor;
	return (*this);
}

void	Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << _ideas[i] << std::endl;
}

void	Brain::printFirstIdea()
{
	std::cout << "First idea is:\t" << this->_ideas[0] << std::endl;
}
