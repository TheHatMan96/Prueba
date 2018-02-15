//
// Created by ultim on 2/13/2018.
//

#include "datafile.h"

#ifndef PRUEBA_REGISTRO_3_H
#define PRUEBA_REGISTRO_3_H


class Registro_3 {
public:
    Registro_3();
    Registro_3(char*,char*,int,char*);
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
    int tamano_nombre;
    char * nombre;
    int tamano_apellido;
    char * apellido;
    int edad;
    int tamano_direccion;
    char * direccion;

};


#endif //PRUEBA_REGISTRO_3_H
