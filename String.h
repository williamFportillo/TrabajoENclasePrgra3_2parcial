#ifndef TRABAJOENCLASE_STRING_H
#define TRABAJOENCLASE_STRING_H

#include "Object.h"
#include <iostream>
using namespace std;
class String: public Object{
private:
    string valor;
public:
    String();
    String(string);
    Tipo getTipo();
    void imprimir();
    void setValor(string);
    String getValor();
    ~String();
};

#endif //TRABAJOENCLASE_STRING_H
