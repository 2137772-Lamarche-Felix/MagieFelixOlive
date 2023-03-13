#include "Baton.h"
#include "utilitaire.h"

Baton::Baton()
{
    utilitaire rand;
    int choixAttaque = rand.rng(0, 2);
	int choixDefense = rand.rng(0,2);
    if (choixAttaque == 0) {
        m_sortAttaque = new SortAttaque("Incinérateur", 20, false);
    }
    else {
        m_sortAttaque = new SortAttaque("Foudre", 30, true);
    }
    if (choixDefense == 0) {
        m_sortDefense = new SortDefense("Guérison", 0,20);
    }
    else {
        m_sortDefense = new SortDefense("Protection", 15,0);
    }
    m_nom = m_sortAttaque->getNom() + " de " + m_sortDefense->getNom();

}

Baton::~Baton()
{
}

std::string Baton::getNom()
{
    return m_nom;
}

SortAttaque* Baton::getSortAttaque()
{
    return m_sortAttaque;
}

SortDefense* Baton::getSortDefense()
{
    return m_sortDefense;
}
