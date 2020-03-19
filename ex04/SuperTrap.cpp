#include "SuperTrap.hpp"


SuperTrap::SuperTrap()
{
    this->hitPoints = get_hitpoints();
    this->maxHitPoints = get_maxhitpoints();
    this->energyPoints = get_energypoints();
    this->maxEnergyPoints = get_maxenergypoints();
    this->level = 1;
    this->name = "not found";
    this->meleeAttackDamage = get_melee();
    this->rangedAttackDamage = get_ranged();
    this->armorReductionDamage = get_armor();
    std::cout << "default supertrap create" << std::endl;
}


SuperTrap::SuperTrap(std::string p_name)
{
    this->hitPoints = get_hitpoints();
    this->maxHitPoints = get_maxhitpoints();
    this->energyPoints = get_energypoints();
    this->maxEnergyPoints = get_maxenergypoints();
    this->level = 1;
    this->name = p_name;
    this->meleeAttackDamage = get_melee();
    this->rangedAttackDamage = get_ranged();
    this->armorReductionDamage = get_armor();
    std::cout << "custom supertrap create" << std::endl;
}


SuperTrap::~SuperTrap()
{
    std::cout << "delete supertrap" << std::endl;
}

void SuperTrap::meleeAttack(std::string &target)
{
    return(FragTrap::meleeAttack(target));
}

void SuperTrap::rangedAttack(std::string &target)
{
    return(NinjaTrap::rangedAttack(target));
}