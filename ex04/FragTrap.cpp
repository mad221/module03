#include "FragTrap.hpp"

Robot::Robot()
{
}

Robot::~Robot()
{
}

FragTrap::FragTrap() : Robot()
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

FragTrap::FragTrap(int p_hitpoints, int p_energypoints, int p_level, std::string p_name)
: Robot()
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
        level = p_level;
    name = p_name;
    std::cout << "fragtrap custom create" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap delete" << std::endl;
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

void FragTrap::his_name()
{
    std::cout << "his name is " << name << std::endl;
}

int FragTrap::get_hitpoints()
{
    return (this->hitPoints);
}

int FragTrap::get_maxhitpoints()
{
    return (maxHitPoints);
}

int FragTrap::get_ranged()
{
    return(rangedAttackDamage);
}

int FragTrap::get_armor()
{
    return (armorReductionDamage);
}