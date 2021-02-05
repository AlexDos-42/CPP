#ifndef AWEAPON
# define AWEAPON

# include <iostream>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &ref);
		virtual ~AWeapon();

		AWeapon		    &operator=(const AWeapon&);
		std::string	    getName() const;
		int		        getApCost() const;
		int		        getDamage() const;
		virtual void	attack() const = 0;

	protected:
	std::string	m_name;
	int		    m_apcost;
	int		    m_damage;
};

#endif