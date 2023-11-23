#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "The Default Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &other)
{
    std::cout << "The Copy Constructor has been called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap& source)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator has been called" << std::endl;
        name = source.name;
        hit_points = source.hit_points;
        energy_points = source.energy_points;
        attack_damage = source.attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "The Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
{
    std::cout << "The Constructor has been called" << std::endl;
    name = n;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_points <= 0 || hit_points <= 0)
        return ;
    energy_points--;
    std::cout << "ClapTrap "<< name << " attacks "<< target <<", causing "<< attack_damage <<" point of damage!"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points < amount || amount == 0)
        return ;
    hit_points -= amount;
    std::cout << "ClapTrap " << name << " lose " << amount << " of hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points < amount || amount == 0 || hit_points <= 0)
        return ;
    energy_points -= amount;
    hit_points += amount;
    std::cout << "ClapTrap "<< name << " repairs itself with "<< amount <<" hit points."<<std::endl;
}