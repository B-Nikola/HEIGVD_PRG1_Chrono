/*
-----------------------------------------------------------------------------------
Nom du fichier : generateurAleatoire.h
Nom du labo : Labo 5 : reflex clavier
Auteur(s) : Pollino Antonio
Date creation : 13.11.2021
Description :
               Ce fichier contient le prototype des fonctions concernant le
               fichier generateurAleatoire.cpp.

Remarque(s) :
Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef HEIG_CHRONO_GENERATIONALEATOIRE_H
#define HEIG_CHRONO_GENERATIONALEATOIRE_H

/// générateur aléatoire de lettres minuscules
/// \return lettres minuscules aléatoires
char generateurLettreMinuscule();

/// générateur aléatoire de lettres majuscules
/// \return lettres majuscules aléatoires
char generateurLettreMajuscule();

/// générateur aléatoire de chiffres
/// \return chiffres aléatoire
int generateurChiffre();

#endif //HEIG_CHRONO_GENERATIONALEATOIRE_H
