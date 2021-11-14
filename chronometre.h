/*
-----------------------------------------------------------------------------------
Nom du fichier : chronometre.h
Nom du labo : Labo 5 : reflex clavier
Auteur(s) : Pollino Antonio
Date creation : 12.11.2021
Description :
               ce fichier contient les prototypes des fonctions contenues dans le
               fichier chronometre.cpp.

Remarque(s) :
Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef HEIG_CHRONO_CHRONOMETRE_H
#define HEIG_CHRONO_CHRONOMETRE_H

/// fonction permettant de démarrer le chronomètre
void demarrageChrono();

/// fonction permettant de calculer la différence de temps
/// \return la différence de temps
double calculDeltaTemps();

/// fonction permettant de calculer un temps moyen
/// (obtenu avec la fonction calculDeltaTemps)
/// \param nbrElements nombre d'éléments sur lesquels la moyenne est établie
/// \return le temps moyen
double calculTempsMoyen(double nbrElements);

#endif //HEIG_CHRONO_CHRONOMETRE_H
