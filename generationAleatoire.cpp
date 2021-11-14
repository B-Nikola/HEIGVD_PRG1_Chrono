/*
-----------------------------------------------------------------------------------
Nom du fichier : generationAleatoire.cpp
Nom du labo : Labo 5 : reflex clavier
Auteur(s) : Pollino Antonio
Date creation : 13.11.2021
Description :
               Ce fichier contient la définition des fonctions permettant de générer
               aléatoirement des caractères.
Remarque(s) :
               Afin d'offrir plus de possibilitées, 3 générateurs ont été mis en
               place, un générateur de lettres minuscules, un générateur de
               lettres majuscules et un générateur de chiffres allant de 1 à 10
               (non compris).

Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>

using namespace std;

char generateurLettreMinuscule() {
   // initialisation du générateur si la 1ere fois
   static bool premierPassage = true;
   if (premierPassage) {
      srand((unsigned)time(NULL));
      premierPassage = false;
   }
   return rand() % 26 + 97; // valeur [a - z]
}

char generateurLettreMajuscule() {
   // initialisation du générateur si la 1ere fois
   static bool premierPassage = true;
   if (premierPassage) {
      srand((unsigned)time(NULL));
      premierPassage = false;
   }
   return rand() % 26 + 65; // valeur [A - Z]
}

int generateurChiffre() {
   // initialisation du générateur si la 1ere fois
   static bool premierPassage = true;
   if (premierPassage) {
      srand((unsigned)time(NULL));
      premierPassage = false;
   }
   return rand() % 10;     // valeur [1 - 10[
}