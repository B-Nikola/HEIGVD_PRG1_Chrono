/*
-----------------------------------------------------------------------------------
Nom du fichier : saisieEtControle.h
Nom du Labo : Labo 5 : reflex clavier
Auteur(s) : Bouattit Nikola
Date creation : 12.11.2021
Description :
               Ce fichier contient le prototype des fonctions contenue dans le
               fichier saisieEtControle.cpp
Remarque(s) :
               les saisie utilisateur pris en charge sont detaille a chaque fonction

Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef HEIGVD_PRG1_CHRONO_SAISIEETCONTROLE_H
#define HEIGVD_PRG1_CHRONO_SAISIEETCONTROLE_H



#include <string> // necessaire pour gérer les message d'erreurs

/// Permet de faire une saisie user pour récupérer un INT
/// \param MIN Valeur minimale comprise
/// \param MAX Valeur maximal comprise
/// \param MSG_ERREUR Message d'erreur a afficher en cas d'erreur de l'user
/// \return Valeur saisie de l'utilisateur en INT
int saisieUserInt(const int MIN,const int MAX,const std::string& MSG_ERREUR);

/// Saisie pour récupérer un char de l'utilisateur
/// \param MESSAGE Message afficher a l'utilisateur
/// \return Bool de si c'est juste ou non
char saisieUserChar( const std::string& MESSAGE, const std::string& MSG_ERREUR);

/// Saisie pour récupérer un char de l'utilisateur entre deux entree ne supporte
/// pas la diference entre MAJUSCULE ou minuscule
/// \param entreUser Char saisie de l'utilisateur
/// \param limInferieur Char au quel il doit superieur ou Egale
/// \param limSupperieur Char au quel il doit inferieur ou Egale
/// \param MESSAGE Message afficher a l'utilisateur
/// \return Bool de si c'est juste ou non
char saisieUserChar(char limInferieur , char limSupperieur , const
                    std::string& MESSAGE , const std::string& MSG_ERREUR);

/// Fais la comparation pour le jeu sans autre vérification que les chars
/// correpondent
/// \param comparateur Char que l'utilisateur doit rentrer
/// \return Booleen qui indique si l'utilisateur a eu juste
bool saisieJeu(char comparateur);

/// Compare deux char et retourne un bool du résultat
/// \param entree Premier terme de l'utilisateur
/// \param comparateur Valeur a la quelle l'entree doit etre egale
/// \return booleen de si le test réussis ou non
bool controleChar(char entree, char comparateur);

#endif //HEIGVD_PRG1_CHRONO_SAISIEETCONTROLE_H
