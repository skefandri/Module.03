#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
    private:
        std::string name;
        int   hit_points;
        int   energy_points;
        int   attack_damage;
    public:
        ClapTrap();
        ClapTrap( ClapTrap &other);
        ClapTrap &operator=(ClapTrap &source);
        ~ClapTrap();
        ClapTrap(std::string n);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif