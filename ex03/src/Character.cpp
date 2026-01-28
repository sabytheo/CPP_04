#include "Character.hpp"
#include <iostream>

Character::Character(std::string const & name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & copy) {
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character & Character::operator=(Character const & other) {
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
		{
			std::cout << "Materia is already equip in slot " << i << std::endl;
			return;
		}
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
