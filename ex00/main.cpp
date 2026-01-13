#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("Arthuro");
    ClapTrap c;
    ClapTrap d(a);
    
    c = b;

    a.attack("Arthuro");
    b.takeDamage(0);
    b.attack("Bernadette");
    a.takeDamage(54);
    a.attack("Arthuro");
    b.beRepaired(1);
    d.attack("UNIVERSE");
    return (0);
}
