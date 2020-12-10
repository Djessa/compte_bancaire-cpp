#include "CompteBancaire.h"
#include <iostream>
using namespace std;
CompteBancaire::CompteBancaire()
{
    solde = 0;
}

CompteBancaire::~CompteBancaire()
{
    //dtor
}

void CompteBancaire::depot(int montant)
{
    solde += montant;
}
void CompteBancaire::retrait(int montant)
{
    solde -= montant;
}
void CompteBancaire::virement(int montant, CompteBancaire &cb)
{
    solde -= montant;
    cb.depot(montant);
}
void CompteBancaire::affichage()
{
    cout<<"Solde : "<<solde<<endl;
}
