#ifndef TRABAJOENCLASE_INTEGER_H
#define TRABAJOENCLASE_INTEGER_H

#include "Object.h"

class Integer:public Object{
private:
    int valor;
public:
    Integer();
    Integer(int);
    ~Integer();
    Tipo getTipo();
    void imprimir();
    void setValor(int);
    Integer getValor();
};
#endif //TRABAJOENCLASE_INTEGER_H
