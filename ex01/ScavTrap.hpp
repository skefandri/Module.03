#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string n);
        ScavTrap(const ScavTrap &oth);
        ScavTrap& operator=(const ScavTrap &sou); 
        ~ScavTrap();
        void guardGate();
};

#endif
