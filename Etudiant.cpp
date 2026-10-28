#include<iostream>
using namespace std;
#include "Person.cpp"
class Etudiant : public Person {
private:
    string niveau;
public:
    Etudiant(string n, int a, string niv) : Person(n, a) {
        niveau = niv;
    }
    void afficher() {
        Person::afficher();
        cout << "Niveau: " << niveau << endl;
    }
};
