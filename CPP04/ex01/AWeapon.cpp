#include "AWeapon.hpp"

AWeapon::AWeapon(): m_name("NoNname"), m_apcost(0), m_damage(0)
{}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): m_name(name), m_apcost(apcost), m_damage(damage)
{}

AWeapon::AWeapon(const AWeapon &ref)
{
	*this = ref;
}

AWeapon::~AWeapon()
{}

AWeapon				&AWeapon::operator=(const AWeapon &ref)
{
	this->m_name = ref.m_name;
	this->m_apcost = ref.m_apcost;
	this->m_damage = ref.m_damage;
	return *this;
}

std::string			AWeapon::getName() const
{
	return m_name;
}

int					AWeapon::getApCost() const
{
	return m_apcost;
}

int					AWeapon::getDamage() const
{
	return m_damage;
}