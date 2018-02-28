#include "String.h"
#include <iostream>
using namespace std;

String::String():valor(""){}

String::String(string p) {
    valor=p;
}

Tipo String::getTipo() {
    return T_String;

}
void String::setValor(string p) {
valor=p;
}


String String::getValor() {
    return valor;
}
void String::imprimir() {
    cout << "Object: "<<T_String<<", { "<<valor<<" }"<<endl;
}



