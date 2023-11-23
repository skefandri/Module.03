#include "ScavTRap.hpp"

ScavTrap::ScavTrap()
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "The Default Constructor of ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(const std::string n)
{
    std::cout << "The Constructor of ScavTrap has been called" << std::endl;
    name = n;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &oth)
{
    std::cout << "The Copy Constructor of ScavTrap has been called" << std::endl;
    *this = other;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &sou)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator of ScavTrap has been called" << std::endl;
        name = source.name;
        hit_points = source.hit_points;
        energy_points = source.energy_points;
        attack_damage = source.attack_damage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "The Destructor of ScavTrap has been called" << std::endl;
}

void ScavTrap::guardGate()
{
        std::cout << "ScavTrap " << name <<"is now in Gate keeper mode" << std::endl;
}