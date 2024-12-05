#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat();									//Default constructor
	Cat(const Cat& other);					//Copy constructor
	Cat& operator=(const Cat& other);		//Copy assignment operator
	Cat(Cat&& other) noexcept;				//Move constructor
	Cat& operator=(Cat&& other) noexcept;	//Move assigment operator
	~Cat();									//Default Destructor

	void	makeSound() const;
	void	putIdea(std::string idea);
	void	printFirstIdea() const;
};

#endif