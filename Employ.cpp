
#include <iostream>
#include <string>
using namespace std;

class Employe {
protected:
    string nom;
    int id;
    float salaireDeBase;

public:
    Employe(string n, int i, float s) {
        nom = n;
        id = i;
        salaireDeBase = s;
    }

    virtual void afficherInfos() {
        cout << "Nom : " << nom << endl;
        cout << "ID : " << id << endl;
        cout << "Salaire de base : " << salaireDeBase << " DH" << endl;
    }

    virtual ~Employe() {
    }
};

class Permanent : public Employe {
private:
    float primeAnnuelle;

public:
    Permanent(string n, int i, float s, float prime)
        : Employe(n, i, s) {
        primeAnnuelle = prime;
    }

    void afficherInfos() override {
        cout << "--- Employe permanent ---" << endl;
        Employe::afficherInfos();
        cout << "Prime annuelle : " << primeAnnuelle << " DH" << endl;
    }
};

class Contractuel : public Employe {
private:
    int dureeContrat;
    float tauxHoraire;

public:
    Contractuel(string n, int i, float s, int duree, float taux)
        : Employe(n, i, s) {
        dureeContrat = duree;
        tauxHoraire = taux;
    }

    float calculerSalaireMensuel(int heures) {
        return heures * tauxHoraire;
    }

    void afficherInfos() override {
        cout << "--- Employe contractuel ---" << endl;
        Employe::afficherInfos();
        cout << "Duree du contrat : " << dureeContrat << " mois" << endl;
        cout << "Taux horaire : " << tauxHoraire << " DH" << endl;
    }
};
