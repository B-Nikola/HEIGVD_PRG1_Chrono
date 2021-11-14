/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
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

Remarque(s) :
               L'affichage du temps a été défini avec 2 chiffres après la virgule
               afin d'offrir plus de précision. Lors de la boucle permettant de
               recommencer le programme, il a été défini que si tout autre
               caractère que le "o" est entré, le programme considère que
               l'utilisateur met fin à l'éxecution de ce dernier.

Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>   // Necessaire pour l'EXIT_SUCCESS
#include <iostream>  // Necessaire pour l'écriture et la lecture dans la console
#include <limits>    // Necessaire pour la gestion des limites max et vider le buffer
#include <string>    // Necessaire pour la gestion des strings
#include <iomanip>   // Necessaire pour limiter l'affichage

#include "chronometre.h"
#include "saisieEtControle.h"
#include "generationAleatoire.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

int main()
{
   const int    NBPARTIEMIN       =  0;
   const int    NBPARTIEMAX       = 10;
   const int    PREC_AFFICHAGE    =  2;
   const string MSGERREURSAISIE   = "Veuillez saisir une valeur correcte";
   string       msg,
                msgSaisie;
   char         lettreAleatoire;
   double       tempsJeu;

   cout << "Bienvenue dans ce jeu de saisie ou vos connaissances du clavier et vos"
           " reflexes seront mis a rude epreuve ! \n\n";
   do{
      int nbPartie          = saisieUserInt(NBPARTIEMIN,NBPARTIEMAX,MSGERREURSAISIE);
      int compteurCorrect   = 0;

      demarrageChrono();

      for (int i   = 0; i   < nbPartie; ++i) {
          lettreAleatoire   = generateurLettreMinuscule();
          msg               = "lettre : "s + lettreAleatoire;
          msgSaisie         =  msg         + " :";

          if (controleChar(saisieUserChar(msgSaisie, MSGERREURSAISIE)
                                                   , lettreAleatoire)){
             ++compteurCorrect;
          }
      }

      tempsJeu = calculDeltaTemps();

      cout << endl                                   << endl;
      cout << "nbre de reponses correctes : "        << compteurCorrect << endl
           << "temps ecoule "                        << setw(16)
           << ": "                                   << fixed
           << setprecision(PREC_AFFICHAGE)           << tempsJeu
           << endl                                   << " => "
           << calculTempsMoyen(nbPartie)             << " sec par lettre"
           << endl                                   << endl;


   }while(controleChar(saisieUserChar
                      ("entrer 'o' pour recommencez :",MSGERREURSAISIE)
                      ,'o'));

   cout << "Presser ENTER pour quitter";
   VIDER_BUFFER;
   return EXIT_SUCCESS;
}


