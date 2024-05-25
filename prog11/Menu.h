#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
#include "GestionClasses.h"
//layer 0
int Main_Menu(GestionClasses&);
//layer 1
int Interface_Etudiant(GestionClasses&);
int Interface_Enseignant_Modules(GestionClasses&);
void Affichage(GestionClasses&);
//layer 2 p1
int Interface_Gestion_Etudiant(GestionClasses&);
int Interface_Gestion_Groupes(GestionClasses&);
int Interface_Gestion_Notes(GestionClasses&);
//layer 2 p2
int Interface_Gestion_Enseignant(GestionClasses&);
int Interface_Gestion_GpM(GestionClasses&);
int Interface_Gestion_Matiere(GestionClasses&);
#endif // MENU_H_INCLUDED
