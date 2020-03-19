#ifndef _FragTrap_
#define _FragTrap_
#include <iostream>
#include <string>
#include <stdlib.h>

class Robot
{
    public:
        Robot();
        ~Robot();
            
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


class FragTrap : public Robot
{
    public:
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);
        FragTrap();
        ~FragTrap();
        FragTrap(int p_hitpoints, int p_energypoints, int level, std::string p_name);
    private:
        
};

#endif