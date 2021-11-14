/*
-----------------------------------------------------------------------------------
Nom du fichier : saisieEtControle.cpp
Nom du Labo : Labo 5 : reflex clavier
Auteur(s) : Bouattit Nikola
Date creation : 12.11.2021
Description :
               Ce fichier sert a faire les vérifications d'entree user et aussis
               la verification entre char
Remarque(s) :
               La saisie Jeu est special pour ce programme et n'est pas recommande
               a etre utiliser dans un autre programme
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

using namespace std;

#include "saisieEtControle.h"
#include <iostream>
#include <limits>



int saisieUserInt(const int MIN, const int MAX, const string& MSG_ERREUR){
   bool erreur ;
   int saisie;
   do {
      // message et saisie
      cout << "saisir une valeur entre  [" << MIN << " - " << MAX << "] :";
      cin >> saisie;

      // vérification
      erreur = cin.fail() or saisie < MIN or saisie > MAX;
      if (erreur) {
         cout << MSG_ERREUR << endl;
         cin.clear();
      }
      // vider buffer
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while(erreur);
   return saisie;
}



char saisieUserChar( const string& MESSAGE, const string& MSG_ERREUR) {
   bool erreur ;
   char saisie;
   do {
      // message et saisie
      cout << MESSAGE;
      cin >> saisie;

      // vérification
      erreur = cin.fail();
      if (erreur) {
         cout << MSG_ERREUR << endl;
         cin.clear();
      }
      // vider buffer
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while(erreur);
   return saisie;
}

char saisieUserChar(char limInferieur , char limSupperieur , const
                    string& MESSAGE , const string& MSG_ERREUR){
   bool erreur ;
   char saisie;
   do {
      // message et saisie
      cout << MESSAGE << limInferieur << " a " << limSupperieur << " : ";
      cin >> saisie;

      // vérification
      erreur = cin.fail() or saisie < limInferieur or saisie > limSupperieur;
      if (erreur) {
         cout << MSG_ERREUR << endl;
         cin.clear();
      }
      // vider buffer
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while(erreur);
   return saisie;
}

bool saisieJeu(char comparateur){
   char entreeUser;
   cin >> entreeUser;
   cin.clear();
   // vider buffer
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return entreeUser == comparateur;
}

bool controleChar(char entree, char comparateur){
   return entree == comparateur;
}
