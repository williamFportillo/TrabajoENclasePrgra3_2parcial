#include <iostream>
#include "Object.h"
#include "String.h"
#include "Integer.h"
#include "Char.h"
using namespace std;
int main() {
    string palabra="";
    char letra;
    int numero=0;
    int opc=0;
    int contador=0;
    Object *array[100];
    String s;
    Integer in;
    Char ch;
    do{
        cout <<"Que tipo de dato desea Ingresar?: "<<endl;
        cout <<"1.-   Una palabra."<<endl;
        cout <<"2.-   Un caracter."<<endl;
        cout <<"3.-   Un Numero."<<endl;
        cout <<"4.-   Imprimir."<<endl;
        cout <<"Ingrese una opcion: ";
        cin >>opc;
        if(opc=1){
            cout <<"Ingrese una palabra: "<<endl;
            cin >>palabra;
            s.setValor(palabra);
            array[contador]=new String(palabra);
            contador++;
        }else if(opc=2){
            cout <<"Ingrese un caracter: "<<endl;
            cin >>letra;
            ch.setValor(letra);
            array[contador]=new Char(letra);
            contador++;
        }else if(opc=3){
            cout <<"Ingrese un Numero: "<<endl;
            cin >> numero;
            in.setValor(numero);
            array[contador]=new Integer(numero);
            contador++;
        }

    }while(opc!=4);


/*    array[0]=new String("Hola");
    array[1]=new Integer(100);
    array[2] = new Char('U');
    array[4]=new String("Mundo");
*/
    for (int i = 0; i <100 ; ++i) {
        array[i]->imprimir();
    }

}