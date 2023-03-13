#include "Magicien.h"

Magicien::Magicien(std::string nom, int vie, int mana, int bouclier, Baton baton)
{
}

Magicien::~Magicien()
{
}

std::string Magicien::Attaque(Baton baton) {
	std::string nom = baton.getSortAttaque()->getNom();
	int degats = baton.getSortAttaque()->getDmg();
	bool bouclier = baton.getSortAttaque()->getIgnoreBouclier();
	if (m_bouclier > 0 && bouclier == true)
	{
		if (m_bouclier > degats)
		{
			m_bouclier -= degats;
		}
		else
		{
			degats -= m_bouclier;
		}
	}
	if (m_bouclier == 0 || bouclier == false)
	{
		m_vie -= degats;
	}

	return nom;
}

std::string Magicien::Defense(Baton baton)
{
	bool bouclier = baton.getSortDefense()->bouclier();
	int points = baton.getSortDefense()->ajoutVieBouclier();
	std::string nom = baton.getSortDefense()->getNom();

	if (bouclier == true)
	{
		if (m_bouclier += points <= 50)
		{
			m_bouclier += points;
		}
		else if (m_bouclier += points > 50)
		{
			m_bouclier = 50;
		}
	}

	if (bouclier == false)
	{
		if (m_vie += points <= 100)
		{
			m_vie += points;
		}
		else if (m_vie += points > 100)
		{
			m_vie = 100;
		}
	}

	return nom;

}



