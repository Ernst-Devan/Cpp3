#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap a("a");
    ClapTrap b("b");
    ScavTrap c("c");

    a.attack("b");
    b.takeDamage(30);
    c.attack("a");
    a.takeDamage(20);
    a.attack("b");
    b.takeDamage(30);
    c.guardGate();
    b.beRepaired(5);
    b.attack("a");
    a.highFivesGuys();
    c.beRepaired(5);
    c.attack("a");
    a.takeDamage(20);
    c.attack("a");
    a.takeDamage(20);
    c.attack("a");
    a.takeDamage(20);
    c.attack("a");
    a.takeDamage(20);
    a.highFivesGuys();
    return (0);
}
