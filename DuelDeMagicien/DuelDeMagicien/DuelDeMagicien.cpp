// DuelDeMagicien.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Magicien.h"
#include "utilitaire.h"

int main()
{
    utilitaire rand;

    std::string input;
    std::string m_bouclier;

    std::string nom = "Bourbe";
    std::string nom2 = "Gamin";
    Magicien mage1{ nom };
    Magicien mage2{ nom2 };

    std::string sort1 = mage2.getBaton()->getSortAttaque()->getNom();
    std::string sort2 = mage2.getBaton()->getSortDefense()->getNom();

    int degat2 = mage2.getBaton()->getSortAttaque()->getDmg();
    int vie2 = mage2.getBaton()->getSortDefense()->ajoutVieBouclier();

    bool bouclier = mage2.getBaton()->getSortDefense()->bouclier();
    if (bouclier == true)
    {
        m_bouclier = "bouclier";
    }
    if (bouclier == false)
    {
        m_bouclier = "vie";
    }

    bool jeu = true;

    while (jeu == true)
    {

        std::cout << nom;
        std::cout << "\nvie: " + std::to_string(mage1.points()[0]);
        std::cout << "\nbouclier: " + std::to_string(mage1.points()[1]);
        std::cout << "\nmana: " + std::to_string(mage1.points()[2]);

        std::cout << "\n\n" + nom2;
        std::cout << "\nvie: " + std::to_string(mage2.points()[0]);
        std::cout << "\nbouclier: " + std::to_string(mage2.points()[1]);
        std::cout << "\nmana: " + std::to_string(mage2.points()[2]);

        std::cout << "\n\n[1] "+ sort1 + " inflige " + std::to_string(degat2) + " points de degats";
        std::cout << "\n[2] "+ sort2 + "  redonne " + std::to_string(vie2) + " point de " + m_bouclier+"\n";

        if (rand.rng(0, 1) == 0)
        {
            input = "";
            std::cin >> input;

            if (input == std::to_string(1))
            {
                mage1.Attaque(mage2);
            }
            else if (input == std::to_string(2))
            {
                mage2.Defense();
            }
            else
            {
                std::cin >> input;
            }
            input = "";
        }
        else if (rand.rng(0, 1) == 1)
        {
            mage2.Attaque(mage1);
            std::cout << "\n\n vous avez ete attaquer \n\n";

        }
        else
        {
            std::cout << "erreur";
        }

        if (mage1.points()[0] <= 0)
        {
            jeu = false;
        }
        if (mage2.points()[0] <= 0)
        {
            jeu = false;
        }

    }

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
