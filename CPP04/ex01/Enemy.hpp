#ifndef ENEMY
# define ENEMY

# include <iostream>

class Enemy
{
	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &ref);
		virtual ~Enemy();
		
		Enemy	        &operator=(const Enemy&);
		int		        getHp() const;
		std::string	    getType() const;
		virtual void	takeDamage(int dmg);

	private:
		int		        m_hp;
		std::string     m_type;
};

#endif