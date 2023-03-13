#include "Sort.h"
#include <string>

Sort::Sort(std::string n)
{
    m_nom = n;
}

std::string Sort::getNom()
{
    return m_nom;
}


SortDefense::SortDefense(std::string n, int ajoutBouclier, int ajoutVie) : Sort(n)
{
    m_nom = n;
    m_ajoutBouclier = ajoutBouclier;
    m_ajoutVie = ajoutVie;

}


SortAttaque::SortAttaque(std::string n, int d, bool ignore) : Sort(n), m_ignoreBouclier(ignore)
{
    m_nom = n;
    m_dmg = d;
    m_ignoreBouclier = ignore;
}

bool SortAttaque::getIgnoreBouclier()
{
    return m_ignoreBouclier;
}

int SortDefense::ajoutVieBouclier()
{
    int point = m_ajoutBouclier + m_ajoutVie;
    return point;
}

bool SortDefense::bouclier()
{
    bool bouclier = false;
    if (m_ajoutBouclier == 0) {
        bouclier = false;
    }
    else if (m_ajoutBouclier > 0)
    {
        bouclier = true;
    }
    return bouclier;
}
