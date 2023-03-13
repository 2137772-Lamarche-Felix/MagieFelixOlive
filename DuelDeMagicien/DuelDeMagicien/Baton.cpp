#include "Baton.h"

Baton::Baton()
{
	int choixAttaque{ rand() % 2 };
	int choixDefense{ rand() % 2 };
    if (choixAttaque == 0) {
        m_sortAttaque = new SortAttaque("Incinérateur", 20, false);
    }
    else {
        m_sortAttaque = new SortAttaque("Foudre", 30, true);
    }
    if (choixDefense == 0) {
        m_sortDefense = new SortDefense("Guérison", -10, 0, 20);
    }
    else {
        m_sortDefense = new SortDefense("Protection", -5, 10, 0);
    }
    m_nom = m_sortAttaque->getNom() + " de " + m_sortDefense->getNom();

}

Baton::~Baton()
{
}

std::string Baton::getNom()
{
    return std::string();
}

SortAttaque* Baton::getSortAttaque()
{
    return nullptr;
}

SortDefense* Baton::getSortDefense()
{
    return nullptr;
}
