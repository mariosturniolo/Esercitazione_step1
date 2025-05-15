//! \file main.cpp
//! \brief Esempio di utilizzo della classe Polynomial
//! \author Emanuele Negrino and Carlo Toscano
//! 

#include <iostream>
#include <cmath>

#include "CPolynomial.h"
#include "CPower.h"

using namespace std;

int main(void) {

    double coeff1[] = { 0, 1, 2 }; // 2x^2 + 1x + 0
    
    Polynomial p1(coeff1, 3);
    cout << "p1: " << endl;
    p1.Dump();

    Polynomial p2(p1);
    cout << "p2: " << endl;
    p2.Dump();

    Polynomial p3;
    p3 = p1;
    cout << "p3: " << endl;
    p3.Dump();

    if (p1 == p2) {
        cout << "p1 == p2" << endl;
    } else {
        cout << "p1 != p2" << endl;
    }

    double coeff2[] = { 0, 1, 2, 3 }; // 3x^3 + 2x^2 + 1x + 0

    p3.SetPolynomial(coeff2, 4);
    cout << "p3: " << endl;
    p3.Dump();

    if (p1 == p3) {
        cout << "p1 == p3" << endl;
    } else {
        cout << "p1 != p3" << endl;
    }

    cout << "Valore di p1 a x=2: " << p1.GetValue(2) << endl;
    cout << "Valore di p3 a x=5: " << p3.GetValue(5) << endl;

    Power P1(2, 3);
    cout << "P1: " << endl;
    P1.Dump();

    Power P2(P1);
    cout << "P2: " << endl;
    P2.Dump();

    Power P3;
    P3 = P1;
    cout << "P3: " << endl;
    P3.Dump();

    if (P1 == P2) {
        cout << "P1 == P2" << endl;
    } else {
        cout << "P1 != P2" << endl;
    }

    P3.SetPower(5, 6);
    cout << "P3: " << endl;
    P3.Dump();

    if (P1 == P3) {
        cout << "P1 == P3" << endl;
    } else {
        cout << "P1 != P3" << endl;
    }

    cout << "Valore di P1 a x=7: " << P1.GetValue(7) << endl;
    cout << "Valore di P3 a x=10: " << P3.GetValue(10) << endl;

    cout << endl;
    cout << "-------- DECONSTRUCTORs --------"<< endl;

    return 0;
}
