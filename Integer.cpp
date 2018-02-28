#include "Integer.h"
#include <iostream>
using namespace std;
Integer::Integer(): valor(0) {}
Integer::Integer(int valor) {
    this-> valor=valor;
}

Tipo Integer::getTipo() {
    return T_Int;
}

void Integer::setValor(int valor) {
    this->valor=valor;
}

Integer Integer::getValor() {
    return T_Int;
}

void Integer::imprimir() {
    cout << "Object: "<<T_Int<<", { "<<valor<<" }"<<endl;
}
