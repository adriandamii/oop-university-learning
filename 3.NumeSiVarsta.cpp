#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Persoana {
    int vs;
    char nume[20];
    char prenume[20];
};

class Pers {
private:
    int vs;
    char nume[20];
    char prenume[20];

public: Pers(int vs1, char* num1, char* prenum1) {
    vs = vs1;
    strcpy_s(nume, 20, num1);
    strcpy_s(prenume, 20, prenum1);
};

      Pers() {}
      int arata_vs() {
          return this->vs;
      }
      char* arata_nume() {
          return this->nume;
      }
};

int main() {
    cout << "Introduceti numarul de persoane: ";
    int nr_persoane;
    cin >> nr_persoane;
    Persoana* persoane = new Persoana[nr_persoane];

    for (int i = 0; i < nr_persoane; ++i) {
        cout << "Introduceti numele persoanei " << i + 1 << ": ";
        char nume[20];
        cin >> nume;
        strcpy_s(persoane[i].nume, 20, nume);

        cout << "Introduceti varsta persoanei " << i + 1 << ": ";
        int vs;
        cin >> vs;
        persoane[i].vs = vs;
    }

    cout << "Afisam numele persoanelor si varstele aferente: " << endl;
    for (int i = 0; i < nr_persoane; ++i) {
        cout << persoane[i].nume << "\t" << persoane[i].vs << endl;
    }

    return 0;
}

