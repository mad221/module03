#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoints += amount;
    if (this->hitPoints >= maxHitPoints)
    {
        this->hitPoints = this->maxHitPoints;
        std::cout << "energie au max" << std::endl;
    }

}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints += (this->armorReductionDamage - amount) ;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << "take damage" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " a distance causant " << rangedAttackDamage << " degat" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " en melee causant " << armorReductionDamage << " degat" << std::endl;
}


ClapTrap::ClapTrap()
{
    std::cout << "Clap create" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Clap destroy" << std::endl;
}

void ClapTrap::his_level(void)
{
    std::cout << "his Claptrap level is " << level << std::endl;
}