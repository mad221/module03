#ifndef _SUPERTRAP_
#define _SUPERTRAP_
#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public  NinjaTrap, public  FragTrap
{
    public:
        SuperTrap();
        ~SuperTrap();
        SuperTrap(std::string p_name);
        void rangedAttack(std::string &target);
        void meleeAttack(std::string &target);

    private:
};

#endif