#ifndef TRABAJOENCLASE_OBJECT_H
#define TRABAJOENCLASE_OBJECT_H

enum Tipo{T_Char, T_String, T_Int};

class Object{
public:
    virtual Tipo getTipo();
    virtual void imprimir();
};
#endif //TRABAJOENCLASE_OBJECT_H
