#include<iostream>
using namespace std;
#include "Compte.cpp"

class CompteEpargne : public Compte {
private:
    float tauxInteret;  
public:
    CompteEpargne(string n, float s, float t) : Compte(n, s) {
        tauxInteret = t;
    }
    double calculerInteret() {
        return solde * tauxInteret;
    }
    void afficher() {
        Compte::afficher();
        cout << "Taux d'intérêt: " << tauxInteret << endl;
    }
};