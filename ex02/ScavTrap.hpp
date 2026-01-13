#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &s);
        ScavTrap &operator=(const ScavTrap &s);
        ~ScavTrap();

        void    guardGate();
        void    attack(const std::string& target);
};

#endif
