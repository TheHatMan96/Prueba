//
// Created by ultim on 2/13/2018.
//
#include <stdio.h>

#ifndef PRUEBA_DATAFILE_H
#define PRUEBA_DATAFILE_H



class datafile {
public :
    datafile(char * );
    void abrir();
    void cerrar();
    char* path;
    void escribir(char*,int,int);
    char * leer(int, int);

private:
    char * direccion;
    FILE * archivo;
    //int longitud;
};


#endif //PRUEBA_DATAFILE_H
