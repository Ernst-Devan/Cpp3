#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    this->_name = "Bernadette";
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    this->_name = name;
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
    this->_name = s._name;
    this->_hit = s._hit;
    this->_energy = s._energy;
    this->_damage = s._damage;
    std::cout << "ScavTrap Copy constructor: " << s._name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
    std::cout << "ScavTrap Operator = called" << std::endl;
    if (this == &s)
        return (*this);
    this->_name = s._name;
    this->_hit = s._hit;
    this->_energy = s._energy;
    this->_damage = s._damage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->_name << " is now in Gate keeper mode !"<< std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
 if (can_do())
        return;
    this->_energy--;
    std::cout << "ScavTrap "<< this->_name << " attack " << target << ", causing " << this->_damage << " points of damage!" << std::endl;

}

