#include <iostream>
#include <string>
using namespace std;
#include "Menu.h"
#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"
#include "Matiere.h"
#include "GroupeModule.h"
#include "Groupe.h"
#include "Note.h"
#include "GestionClasses.h"
int main()
{

     GestionClasses g; // create an instance of the GestionClasses class
     g.connect_db(); // connect to a database
     int choix;
     int choice=Main_Menu(g); // display a menu to the user and get their choice
     std::cout<<"..............Saving data !"<<endl;
     g.update_db(); // update the database with any changes
     return 0;
}
