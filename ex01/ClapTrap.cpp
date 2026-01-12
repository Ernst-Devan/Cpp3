#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(): _name("Roberto"), _hit(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hit(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap Construct called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c): _name(c._name), _hit(c._hit), _energy(c._energy), _damage(c._damage)
{
    std::cout << "ClapTrap Copy constructor: " << c._name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& c)
{
    std::cout << "ClapTrap Operator = called" << std::endl;
    if (this == &c)
        return (*this);
    this->_name = c._name;
    this->_hit = c._hit;
    this->_energy = c._energy;
    this->_damage = c._damage;
    return (*this);
}

int ClapTrap::getHit() const
{
    return (this->_hit);
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

int ClapTrap::getEnergy() const
{
    return (this->_energy);
}

int ClapTrap::getDamage() const
{
    return (this->_damage);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit == 0 || this->_energy == 0)
        return;
    this->_energy--;
    std::cout << "ClapTrap "<< this->_name << " attack " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit <= 0)
    {
        std::cout << this->_name << " is dead" << std::endl;
        return;
    }
    if ((int)amount >= this->_hit)
        this->_hit = 0;
    else 
        this->_hit -= amount;
    std::cout << this->_name << " take " << amount << " damage " << "remaining: " << this->_hit << " hits" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit <= 0 || this->_energy <= 0)
        return;
    this->_hit += amount;
    this->_energy--;
    std::cout << this->_name << " repair " << amount << ", causing remaining " << this->_hit << " of hits" << std::endl; 
}
