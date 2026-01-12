#ifndef FragTrap_H
#define FragTrap_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
            FragTrap();
            FragTrap(const std::string &name);
            FragTrap(const FragTrap &c);
            FragTrap &operator=(const FragTrap &c);
            ~FragTrap();

            virtual void    attack(const std::string& target);
            void            highFivesGuys(void);
};
#endif
