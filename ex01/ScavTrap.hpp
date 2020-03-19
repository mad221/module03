#ifndef _SCAVTRAP_
# define _SCAVTRAP_
# include <iostream>
# include <string>
# include "FragTrap.hpp"

class ScavTrap : public Robot
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(int p_hitpoints, int p_energypoints, int level, std::string p_name);
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewComer();
    private:

};


#endif