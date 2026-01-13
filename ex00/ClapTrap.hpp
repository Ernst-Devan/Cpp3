#ifndef _CLAPTRAP_HPP
#define _CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &c);
        ClapTrap &operator=(const ClapTrap &c);
        ~ClapTrap();

        std::string getName() const;
        int         getHit() const;
        int         getEnergy() const;
        int         getDamage() const;

        void        attack(const std::string& target);
        int         can_do(void) const;
        
        void        takeDamage(unsigned int amout);
        void        beRepaired(unsigned int amout);

    private:
        std::string _name;
        int         _hit;
        int         _energy;
        int         _damage;
};

#endif
