//
// Created by ultim on 2/13/2018.
//

#include "Registro_2.h"
#include "string.h"
#include <iostream>


using namespace std;

Registro_2::Registro_2() {

}

Registro_2::Registro_2(char *n, char *a, int e, char *d) {
    archivo->abrir();
    n= new char[30];
    nombre= n;
    a= new char[30];
    apellido=a;
    edad=e;
    d = new char[30];
    direccion=d;
}

/*void Registro_2::mostrarRegistro() {

}*/

char *Registro_2::tochar() {
    int pos = 0;
    char * data = new char[94];
    memcpy(&data[pos],nombre,30);
    pos+=30;
    memcpy(&data[pos],apellido,30);
    pos+=30;
    memcpy(&data[pos],&edad,4);
    pos+=4;
    memcpy(&data[pos],direccion,30);
    pos+=30;
    return data;
}

void Registro_2::fromchar(char * data) {
    int pos = 0;
    data = new char[94];
    memcpy(nombre,&data[pos],30);
    pos+=30;
    memcpy(apellido,&data[pos],30);
    pos+=30;
    memcpy(&edad,&data[pos],4);
    pos+=4;
    memcpy(direccion,&data[pos],30);
    pos+=30;
}

void Registro_2::abrirArchivo() {
    archivo->abrir();
}

void Registro_2::cerrarArchivo() {
    archivo->cerrar();
}

void Registro_2::leerArchivo() {

    fromchar(archivo->leer(0,94));
    cout<<"NOMBRE"<<endl;
    cout<<"APELLIDO"<<endl;
    cout<<"EDAD"<<endl;
    cout<<"DIRECCION"<<endl;
}

void Registro_2::guardarArchivo(char *) {
    char * apt = tochar();
    archivo->escribir(apt,0,94);
}

/*int Registro_2::tamanoRegistro() {

}*/
