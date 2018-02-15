//
// Created by ultim on 2/13/2018.
//

#include "datafile.h"
#include <io.h>
#include <cstring>
#include <stdio.h>
#include <iostream>


datafile::datafile(char * p) {
    direccion = p;
    // se asegura que se cree y que no se remplaze la direccion
    if( (_access( direccion, 0 )) == -1 )
    {
        archivo=fopen(direccion,"wb+");
        cerrar();
    }
}

void datafile::abrir() {

    archivo=fopen(path,"rb+");

}

void datafile::cerrar() {
    fclose(archivo);
}

void datafile::escribir(char *data, int posicion, int longitud) {
    fseek(archivo,longitud,posicion);
    fwrite(data,1,longitud,archivo);
}

char *datafile::leer(int posicion , int longitud ) {
    char * dat = new char [posicion];
    fseek(archivo,longitud,posicion);
    fread(dat,1,longitud,archivo);
    return dat;
}
