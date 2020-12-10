#include <iostream>
#include "CompteBancaire.h"
using namespace std;

int main()
{
    CompteBancaire cb1, cb2;
    cb1.depot(1000);
    cb2.depot(10000);
    cout<<"Compte 1  ";
    cb1.affichage();
    cout<<"Compte 2  ";
    cb2.affichage();
    cb2.retrait(10);
    cout<<"Compte 2  ";
    cb2.affichage();
    cb1.virement(50, cb2);
    cout<<"Compte 2  ";
    cb2.affichage();
    return 0;
}
