#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Default constructor Cat called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &other) {
	std::cout << "Copy constructor Cat called" << std::endl;
	_type = other._type;
}

Cat&	Cat::operator=(const Cat &other) {
	std::cout << "Copy assignment operator Cat called" << std::endl;
	this->_type = other._type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat goes meow" << std::endl;
}
