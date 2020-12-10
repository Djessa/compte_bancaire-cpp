#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


class CompteBancaire
{
    public:
        CompteBancaire();
        void depot(int montant);
        void retrait(int montant);
        void virement(int montant, CompteBancaire &cb);
        void affichage();
        virtual ~CompteBancaire();
    private:
        int solde;
};

#endif // COMPTEBANCAIRE_H
