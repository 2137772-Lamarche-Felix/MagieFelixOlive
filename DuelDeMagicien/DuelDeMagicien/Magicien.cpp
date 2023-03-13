#include "Magicien.h"

Magicien::Magicien(std::string nom)
{
	m_nom = nom;
	m_baton = new Baton();
	m_bouclier = 0;
	m_mana = 50;
	m_vie = 50;
}

Magicien::~Magicien()
{
}

Baton* Magicien::getBaton()
{
	return m_baton;
}

std::string Magicien::Attaque(Magicien mage) {
	std::string nom = mage.getBaton()->getSortAttaque()->getNom();
	int degats = mage.getBaton()->getSortAttaque()->getDmg();
	bool bouclier = mage.getBaton()->getSortAttaque()->getIgnoreBouclier();

	m_mana -= 10;

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
	//m_vie -= degats;
	return nom;
}

std::string Magicien::Defense()
{
	bool bouclier = m_baton->getSortDefense()->bouclier();
	int points = m_baton->getSortDefense()->ajoutVieBouclier();
	std::string nom = m_baton->getSortDefense()->getNom();

	m_mana -= 10;

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

void Magicien::verifMana()
{
	if (m_mana < 1)
	{
		m_baton = new Baton();
	}
}

bool Magicien::getVie()
{
	bool vie = false;
	if (m_vie > 0)
	{
		vie = true;
	}
	else {
		vie = false;
	}
	return vie;
}

int* Magicien::points()
{
	int points[] = { m_vie,m_bouclier,m_mana };
	return points;
}



