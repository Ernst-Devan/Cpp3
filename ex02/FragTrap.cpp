#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "Bernadette";
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
    this->_name = name;
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &s)
{
    this->_name = s._name;
    this->_hit = s._hit;
    this->_energy = s._energy;
    this->_damage = s._damage;
    std::cout << "FragTrap Copy constructor: " << s._name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
    std::cout << "FragTrap Operator = called" << std::endl;
    if (this == &s)
        return (*this);
    this->_name = s._name;
    this->_hit = s._hit;
    this->_energy = s._energy;
    this->_damage = s._damage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
 if (this->_hit == 0 || this->_energy == 0)
        return;
    this->_energy--;
    std::cout << "ScavTrap "<< this->_name << " attack " << target << ", causing " << this->_damage << " points of damage!" << std::endl;

}

void    FragTrap::highFivesGuys(void)
{
    if (this->_hit <= 0 || this->_energy <= 0)
        return;
    std::cout << "Heyy guys stop the war ! Go make a high fives all together" << std::endl;
}
