#ifndef _ScavTrap_hpp
#define _ScavTrap_hpp

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
