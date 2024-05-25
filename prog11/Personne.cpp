#include "Personne.h"


void Personne::setID(int id){
this->Id=id;
}
void Personne::setNom(string nom){
this->Nom=nom;
}
void Personne::setPrenom(string prenom){
this->Prenom=prenom;
}
void Personne::setEmail(string email){
this->Email=email;
}
Personne::Personne()
{
setID(-1); //Pour indiquer que l’ID n’a pas encore eté défini
setNom(" ");
setPrenom(" ");
setEmail(" ");
}
Personne::Personne(const Personne &p)
{
Id=p.getId();
Nom=p.getNom();
Prenom=p.getPrenom();
Email=p.getEmail();
}
void Personne::display(){
cout<<"Nom:"<<this->Nom<<" | Prenom:"<<this->Prenom<<" | Email:"<<this->Email<<endl;
}
Personne::Personne(int id,string nom,string prenom,string email)
{
setID(id);
setNom(nom);
setPrenom(prenom);
setEmail(email);
}
Personne::~Personne()
{

}

