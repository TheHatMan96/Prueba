//
// Created by ultim on 2/13/2018.
//
#include "datafile.h"
#ifndef PRUEBA_REGISTRO_1_H
#define PRUEBA_REGISTRO_1_H



class Registro_1 {
public:
    Registro_1();
    Registro_1(char*n,char*a,int e,char*d);
    void mostrarRegistro();
    char * tochar();
    void fromchar();
    void abrirArchivo();
    void cerrarArchivo();
    void leerArchivo();
    void guardarArchivo(int);
    int tamanoRegistro();

private:
    datafile * archivo;
    char * nombre;
    char * apellido;
    int edad;
    char * direccion;

};


#endif //PRUEBA_REGISTRO_1_H
