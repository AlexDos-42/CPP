#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &ref);
		virtual ~Character();

		Character	&operator=(const Character&);

		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;

	private:
		std::string	m_name;
		int			m_ap;
		AWeapon		*m_weapon;
};

std::ostream		&operator<<(std::ostream &output, const Character &character);

#endif