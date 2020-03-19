#ifndef _SCAVTRAP_
# define _SCAVTRAP_
# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class ScavTrap : public Robot, public virtual ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        void his_hitpoints();
        ScavTrap(int p_hitpoints, int p_energypoints, int level, std::string p_name);
        void challengeNewComer();
    private:

};


#endif