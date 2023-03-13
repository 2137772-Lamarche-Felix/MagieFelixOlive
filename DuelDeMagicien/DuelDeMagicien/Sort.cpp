#include "Sort.h"
#include <string>

Sort::Sort(std::string n, int d)
{
    m_nom = n;
    m_dmg = d;
}

std::string Sort::getNom()
{
    return std::string();
}

int Sort::getDmg()
{
    return 0;
}

SortDefense::SortDefense()
{
}

void SortDefense::ajoutBouclier()
{
}

void SortDefense::ajoutVie()
{
}



SortAttaque::SortAttaque(std::string n, int d, bool ignore) : Sort(n, d), m_ignoreBouclier(ignore)
{

}

bool SortAttaque::getIgnoreBouclier()
{
    return false;
}
