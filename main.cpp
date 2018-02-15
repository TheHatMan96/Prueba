#include <iostream>
#include "Registro_1.h"
#include "Registro_2.h"
#include "Registro_3.h"
#include <iostream>
#include "string.h"
using namespace std;

int main() {
    datafile * archivo = new datafile("C:\\Users\\ultim\\CLionProjects\\Prueba\\prueba.data");
    archivo->abrir();
    string nombre ="Daniel";
    string apellido = "Medina";
    string direccion = "Col. Los Alamos";

    char * n = new char[30];
    char * a = new char[30];
    char * d = new char[30];

    strcpy(n,nombre.c_str());
    strcpy(a,apellido.c_str());
    strcpy(d,direccion.c_str());
    cout<<"REGISTRO_2";
    Registro_2 *r2= new Registro_2(n,a,24,d);
    r2->abrirArchivo();
    char *data= r2->tochar();
    r2->guardarArchivo(data);
    r2->leerArchivo();
    r2->cerrarArchivo();

    std::cout << "PROOVE" << std::endl;
    return 0;
}