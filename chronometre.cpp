/*
-----------------------------------------------------------------------------------
Nom du fichier : chronometre.cpp
Nom du labo : Labo 5 : reflex clavier
Auteur(s) : Pollino Antonio
Date creation : 12.11.2021
Description :
               Ce fichier contient une fonction permettant de démarrer le
               chronomètre, de l'arrêter et de récupérer le temps total écoulé,
               ainsi qu'une fonction permettant de calculer le temps moyen écoulé.
Remarque(s) :
               La fonction calculTempsMoyen est strictement liée à la fonction
               calculDeltaTemps et ne fonctionne pas sans cette dernière.

Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#include <iostream> //
#include <ctime>    //

using namespace std;

time_t tempsT0;
time_t tempsT1;
bool   chronoDemarre;
double deltaTemps;
double tempsMoyen;

void demarrageChrono() {
   if (chronoDemarre == 1){
      cout << "Erreur : le chronometre a deja demarre"              << endl;
      return;
   }
   else {
      chronoDemarre = 1;
      tempsT0 = time(NULL);
   }
}

double calculDeltaTemps() {
   if (chronoDemarre   != 1){
      cout << "Erreur : le chronometre n'a pas enregistre de temps" << endl;
      return deltaTemps = 0;
   }
   else{
      tempsT1           = time    (NULL);
      deltaTemps        = difftime(tempsT1, tempsT0);
      return deltaTemps;
   }
}

double calculTempsMoyen(double nbrElements) {
   tempsMoyen           = calculDeltaTemps() / nbrElements;
   chronoDemarre = 0;
   return tempsMoyen;
}





