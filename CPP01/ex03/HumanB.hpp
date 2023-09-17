# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		std::string name_b;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void		attack(void);
		void		setWeapon(Weapon &weapon);
};

#endif
