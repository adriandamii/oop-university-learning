#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Persoana {
    int vs;
    char nume[20];
    char prenume[20];
};

class Pers {//sa cautati despre modificarile private, public si protected;
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
    int a1;
    a1 = 17;
    Persoana p1;
    p1.vs = 20;

    strcpy_s(p1.nume, 4, "Ion");
    strcpy_s(p1.prenume, 5, "Dory");

    Console::WriteLine("Acest text este afisat cu functia specifica clr");
    cout << p1.nume << "\t" << p1.prenume << "\t" << p1.vs << endl;
    cout << "Mai sus am folosit afisarea standard C++" << endl;
    Console::WriteLine("Utilizam clasa Pers: ");

    Pers p2(20, "Ionescu", "Marius"); 
    Pers* p3 = new Pers(21, "Popescu", "Bianca");
    cout << p2.arata_nume() << " " << p2.arata_vs() << endl;
    cout << p3->arata_nume() << " " << p3->arata_vs() << endl;

    Console::ReadKey();
    return 0;
}

