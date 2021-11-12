/*
-----------------------------------------------------------------------------------
Nom du fichier : main
Nom du labo : Labo 5 : reflex clavier
Auteur(s) : Bouatit Nikola et Pollino Antonio
Date creation : 10.11.2021
Description :
               Ce programme permet de tester la dextérité de l'utilisateur.
               Le programme va afficher des lettres aléatoires, le nombre de
               lettres varie en fonction de la saisie utilisateur.
               l'utilisateur doit reproduire le plus rapidement possible la
               séquence de lettre affichée par le programme. Dès que l'utilisateur
               a terminé la saisie, le programme affiche le nombre d'entrées qui
               ont été correctement réalisées, le temps total de l'exercice ainsi que
               le temps moyen par lettre.

Remarque(s) : <à compléter>
Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <limits>

#include "saisieEtControle.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;
int main()
{
   const int NBPARTIEMIN = 0;
   const int NBPARTIEMAX = 10;
   const string MSGERREURSAISIE = "Veuillez saisir une valeur correcte";
   cout << "Bienvenue dans ce jeu de saisie ou vos connaissances du clavier et vos"
           " reflexes seront mis  rude epreuves ! \n\n";
   do{
      int nbPartie = saisieUserInt(NBPARTIEMIN,NBPARTIEMAX,MSGERREURSAISIE);
      for (int i = 0; i < nbPartie; ++i) {



      }

   }while(controleChar(saisieUserChar("entrer 'o' pour recommencez : ",MSGERREURSAISIE),'o'));


   cout << "Presser ENTER pour quitter";
   VIDER_BUFFER;
   return EXIT_SUCCESS;
}

