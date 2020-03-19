#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
    hitPoints = 60;
    maxHitPoints = 60;
    energyPoints = 120;
    maxEnergyPoints = 120;
    level = 1;
    name = "not found";
    meleeAttackDamage = 60;
    rangedAttackDamage = 5;
    armorReductionDamage = 0;
    std::cout << "Ninja trap defautl create" << std::endl;
}

NinjaTrap::NinjaTrap(std::string p_name) : ClapTrap()
{
        hitPoints = 60;
    maxHitPoints = 60;
    energyPoints = 120;
    maxEnergyPoints = 120;
    level = 1;
    name = p_name;
    meleeAttackDamage = 60;
    rangedAttackDamage = 5;
    armorReductionDamage = 0;
    std::cout << "Ninja trap custom create" << std::endl;
}

NinjaTrap::~NinjaTrap()
{

}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
    clap.his_level();
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
  frag.his_name();

}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
    std::cout << "Ninja " << ninja.name << std::endl; 
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
    scav.his_hitpoints();
}

int NinjaTrap::get_maxenergypoints()
{
    return (maxEnergyPoints);
}

int NinjaTrap::get_energypoints()
{
    return (energyPoints);
}

int NinjaTrap::get_melee()
{
    return(meleeAttackDamage);
}