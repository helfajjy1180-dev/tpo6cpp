#include"Compteepargne.cpp"

int main() {
    CompteEpargne ce("12345", 1000.0, 0.05);
    ce.afficher();
    cout << "Intérêt calculé: " << ce.calculerInteret() << endl;
    return 0;
}