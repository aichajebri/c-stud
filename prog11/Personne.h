#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Personne
{
     protected:
     int Id;
     string Nom;
     string Prenom;
     string Email;

    public:
        //constructors et destructor
        Personne();
        Personne(int id,string nom,string prenom,string email);
        Personne (const Personne &p);
        virtual ~Personne();
        //setters
        void setID(int id);
        void setNom(string nom);
        void setPrenom(string prenom);
        void setEmail(string email);
        //getters
        int getId()const{return Id;}
        string getNom()const{return Nom;}
        string getPrenom()const{return Prenom;}
        string getEmail()const{return Email;}
        //displays
        void display();

};

#endif // PERSONNE_H
