
#include <iostream>
#include "Employ.cpp"
using namespace std;

int main() {
    Employe* employes[3];

    employes[0] = new Permanent("Ahmed", 101, 6000, 12000);
    employes[1] = new Contractuel("Sara", 102, 0, 6, 80);
    employes[2] = new Permanent("Youssef", 103, 7500, 15000);

    for (int i = 0; i < 3; i++) {
        employes[i]->afficherInfos();
        cout << endl;
    }

    Contractuel* c = new Contractuel("Sara", 102, 0, 6, 80);

    cout << "Salaire mensuel de Sara : "
         << c->calculerSalaireMensuel(160) << " DH" << endl;

    delete c;

    for (int i = 0; i < 3; i++) {
        delete employes[i];
    }

    return 0;
}
