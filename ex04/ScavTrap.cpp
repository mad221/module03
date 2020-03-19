#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : Robot()
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage  = 15;
    armorReductionDamage = 3;
    name = "no name";
    std::cout << "ScavTrap default create" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap delete" << std::endl;
}


ScavTrap::ScavTrap(int p_hitpoints, int p_energypoints, int p_level, std::string p_name)
: Robot()
{

     hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage  = 15;
    armorReductionDamage = 3;
     if (p_hitpoints <= maxHitPoints && p_hitpoints >= 0)
        hitPoints = p_hitpoints;
    if (p_energypoints <= maxEnergyPoints && p_energypoints >= 0)
        energyPoints = p_energypoints;
    if (level >= 0)
        level = p_level;
    name = p_name;
    std::cout << "ScavTrap custom create" << std::endl;
}

void ScavTrap::challengeNewComer()
{
    std::cout << "press 1 or 2 for select a challenge" << std::endl << "your choice : ";
    std::string i;
    getline(std::cin, i);
    if (i.compare("1") == 0)
        std::cout << "challenge 1 kill your friend" << std::endl;
    else if (i.compare("2") == 0)
        std::cout << "challenge 1 kill yourself" << std::endl;
    else
        std::cout << "wrong argument taken" << std::endl;
}

void ScavTrap::his_hitpoints()
{
    std::cout << hitPoints << " hitpoints" << std::endl;
}