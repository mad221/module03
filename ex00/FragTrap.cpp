#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 100;
    maxEnergyPoints = 100;
    level = 1;
    name = "unknow";
    meleeAttackDamage = 30;
    rangedAttackDamage  = 20;
    armorReductionDamage = 5;
    std::cout << "default fragtrap create" << std::endl;
}

FragTrap::FragTrap(int p_hitpoints, int p_energypoints, int level, std::string p_name)
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 100;
    maxEnergyPoints = 100;
    level = 1;
    meleeAttackDamage = 30;
    rangedAttackDamage  = 20;
    armorReductionDamage = 5;
    if (p_hitpoints <= maxHitPoints && p_hitpoints >= 0)
        hitPoints = p_hitpoints;
    if (p_energypoints <= maxEnergyPoints && p_energypoints >= 0)
        energyPoints = p_energypoints;
    if (level >= 0)
        level = level;
    name = p_name;
    
    std::cout << "fragtrap custom create" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap delete" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->hitPoints = maxHitPoints;
    std::cout << "energie au max" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    this->hitPoints += (this->armorReductionDamage - amount) ;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << "take damage" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " a distance causant " << rangedAttackDamage << " degat" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " en melee causant " << armorReductionDamage << " degat" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (energyPoints - 25 >= 0)
    {
        energyPoints -= 25;
        int value = rand() % 5;
        std::string type[] ={ "pouce attack", "foot attack", "knife attack", "pacific attack", "no idee attack"};
        std::cout << " a " << type[value] << " is giving bye " << name << " to " << target << std::endl;
    }
    else
        std::cout << "You should have more enegy for using this function" << std::endl;
}