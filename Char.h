#ifndef TRABAJOENCLASE_CHAR_H
#define TRABAJOENCLASE_CHAR_H

#include "Object.h"

class Char: public Object{
private:
    char valor;
public:
    Char();
    Char(char);
    ~Char();
    Tipo getTipo();
    void imprimir();
    void setValor(char);
    Char getValor();
};
#endif //TRABAJOENCLASE_CHAR_H
