#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();									//Default constructor
	Brain(const Brain& other);					//Copy constructor
	Brain& operator=(const Brain& other);		//Copy assignment operator
	Brain(Brain&& other) noexcept;				//Move constructor
	Brain& operator=(Brain&& other) noexcept;	//Move assigment operator
	~Brain();									//Default Destructor

	void	setIdeas(std::string idea);
	void	printIdeas() const;
	void	printFirstIdea();

};

#endif