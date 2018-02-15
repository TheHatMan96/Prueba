//
// Created by ultim on 2/13/2018.
//
#include "datafile.h"

#ifndef PRUEBA_REGISTRO_2_H
#define PRUEBA_REGISTRO_2_H


class Registro_2 {
public:
    Registro_2();
    Registro_2(char*n,char*a,int e,char*d);
    void mostrarRegistro();
    char * tochar();
    void fromchar(char*);
    void abrirArchivo();
    void cerrarArchivo();
    void leerArchivo();
    void guardarArchivo(char*);
    int tamanoRegistro();

private:
    datafile * archivo;
    char *nombre;
    char * apellido;
    int edad;
    char * direccion;


};


#endif //PRUEBA_REGISTRO_2_H
