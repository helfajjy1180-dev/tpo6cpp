#include<iostream>
using namespace std;

class Compte {
protected:
    string numero;
    float solde;

public:
    Compte(string n, float s) {
        numero = n;
        solde = s;
    }
    void deposer(float montant) {
        solde += montant;
    }
    void retirer(float montant) {
        if (montant <= solde) {
            solde -= montant;
        } else {
            cout << "Solde insuffisant!" << endl;
        }
    }
    void afficher() {
        cout << "Numéro: " << numero << ", Solde: " << solde << endl;
    }
};
