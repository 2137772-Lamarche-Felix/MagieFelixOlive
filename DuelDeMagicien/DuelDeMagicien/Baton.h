#pragma once

#include <string>
#include "Sort.h"
class Baton
{
private:
	std::string m_nom;
	SortAttaque* m_sortAttaque;
	SortDefense* m_sortDefense;
public:
	Baton();
	~Baton();
	std::string getNom();
	SortAttaque* getSortAttaque();
	SortDefense* getSortDefense();
};

