#ifndef _NINJA_
#define _NINJA_
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : ClapTrap
{
    NinjaTrap();
    NinjaTrap(std::string p_name);
    ~NinjaTrap();
    void ninjaShoebox(ClapTrap &clap);
    void ninjaShoebox(FragTrap &frag);
    void ninjaShoebox(ScavTrap &frag);
    void ninjaShoebox(NinjaTrap &frag);


};

#endif