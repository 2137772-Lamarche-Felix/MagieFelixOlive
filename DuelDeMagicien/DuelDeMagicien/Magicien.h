#pragma once
#include "Baton.h"
#include "Sort.h"
class Magicien
{
private:
	std::string m_nom;
	int m_vie;
	int m_mana;
	int m_bouclier;
	Baton* m_baton;
	//nom du sort que le magicien lance dans le moment présent
	std::string m_nomSort;

public:
	Magicien(std::string nom,int vie,int mana,int bouclier,Baton baton);
	~Magicien();
	//fonction qui retourne le nom de l'attaque
	std::string Attaque(Baton baton);
	//fonction qui retourne le nom de la défense
	std::string Defense(Baton baton);
};

