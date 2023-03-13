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
	Magicien(std::string nom);
	~Magicien();
	Baton* getBaton();
	//fonction qui retourne le nom de l'attaque et ajuste la vie et le bouclier
	//du sorcier visé
	//en paramètre c'est le sorcier visé par l'attaque
	std::string Attaque(Magicien mage);
	//fonction qui retourne le nom de la défense et ajuste la vie et le bouclier
	//du sorcier actuel
	std::string Defense();
	//remplace le baton du sorcier actuel par un nouveau baton
	//si le mana a atteint 0
	void verifMana();

	bool getVie();

	int* points();
};

