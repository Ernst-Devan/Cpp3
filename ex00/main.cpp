#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("Arthuro");
    ClapTrap c;
    ClapTrap d(a);
    
    c = b;

    a.attack("Arthuro");
    b.takeDamage(5);
    b.beRepaired(2);
    d.attack("UNIVERSE");
    return (0);
}
