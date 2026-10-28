#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void afficher() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};