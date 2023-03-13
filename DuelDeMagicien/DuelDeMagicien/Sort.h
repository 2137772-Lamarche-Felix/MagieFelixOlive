#ifndef SORT_H
#define SORT_H


#include <string>

class Sort
{
protected:

	std::string m_nom;
public:
	// Constructeur
	Sort(std::string n);
	// Retourne le nom de la cérature
	virtual std::string getNom();
	// Retourne un pointeur vers la position de la créature
	// Change la position de la créature
};

class SortDefense:public Sort
{
private:

	int m_ajoutBouclier;
	int m_ajoutVie;
	
public:
	// Constructeur
	SortDefense(std::string n,int ajoutBouclier,int ajoutVie);
	// Retourne le nombre de vie ou de bouclier à ajouter
	int ajoutVieBouclier();
	//retourn vrai les points ajouté vont dans le bouclier, faux si les points vont dans la vies
	bool bouclier();
	
};

class SortAttaque :public Sort
{
private:

	int m_dmg;
	bool m_ignoreBouclier;

public:
	// Constructeur
	SortAttaque(std::string n, int d, bool ignore);
	// Retourne si oui ou non on doit ignore le Bouclier
	bool getIgnoreBouclier();
	virtual int getDmg();

};

#endif

