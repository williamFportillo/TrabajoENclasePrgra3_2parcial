#include "Char.h"
#include <iostream>
using namespace std;
Char::Char():valor() {}
Char::Char(char valor) {
    setValor(valor);
}

Tipo Char::getTipo() {
    return T_Char;
}

void Char::setValor(char valor) {
    this->valor=valor;
}

Char Char::getValor() {
    return T_Char;
}

void Char::imprimir() {
    cout << "Object: "<<T_Char<<", { "<<valor<<" }"<<endl;
}
