#ifndef _CLAPTRAP_
#define _CLAPTRAP_
#include <iostream>
#include <string>

class ClapTrap
{
    public:
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void his_level(void);
        ClapTrap();
        ~ClapTrap();
    protected:
        int hitPoints;
        int maxHitPoints;
        int energyPoints;
        int maxEnergyPoints;
        int level;
        std::string name;
        int meleeAttackDamage;
        int rangedAttackDamage;
        int armorReductionDamage;


};

#endif