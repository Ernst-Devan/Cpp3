#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a;
    ClapTrap b;
       
    a.attack("Roberto");
    b.takeDamage(20);
    b.attack("Bernadette");
    a.takeDamage(0);
    a.beRepaired(5);
    a.guardGate();
    b.beRepaired(100);
    return (0);
}
