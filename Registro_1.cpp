//
// Created by ultim on 2/13/2018.
//

#include "Registro_1.h"
#include "stdio.h"
#include "string.h"
#include <iostream>

using namespace std;

Registro_1::Registro_1() {

}

Registro_1::Registro_1(char *n, char *a, int e, char * d) {
    archivo->abrir();
    nombre= n;
    apellido=a;
    edad=e;
    direccion=d;
}

void Registro_1::mostrarRegistro() {

}

char *Registro_1::tochar() {

}

void Registro_1::fromchar() {

}

void Registro_1::abrirArchivo() {

}

void Registro_1::cerrarArchivo() {

}

void Registro_1::leerArchivo() {

}

void Registro_1::guardarArchivo(int n) {

}

int Registro_1::tamanoRegistro() {
    return 0;
}
