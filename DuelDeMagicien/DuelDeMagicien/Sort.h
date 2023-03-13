#ifndef SORT_H
#define SORT_H


#include <string>

class Sort
{
protected:

	std::string m_nom;
	int m_dmg;
public:
	// Constructeur
	Sort(std::string n, int d);
	// Retourne le nom de la cérature
	virtual std::string getNom();
	// Retourne un pointeur vers la position de la créature
	// Change la position de la créature
	virtual int getDmg();
};

class SortDefense:public Sort
{
private:

	int m_ajoutBouclier;
	int m_ajoutVie;
	
public:
	// Constructeur
	SortDefense();
	// Retourne si oui ou non on doit ignore le Bouclier
	void ajoutBouclier();
	void ajoutVie();
	
};

class SortAttaque :public Sort
{
private:

	bool m_ignoreBouclier;

public:
	// Constructeur
	SortAttaque(std::string n, int d, bool ignore);
	// Retourne si oui ou non on doit ignore le Bouclier
	bool getIgnoreBouclier();

};

#endif

