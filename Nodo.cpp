#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Nodo.h"
using namespace std;


Nodo::Nodo(std::string descripcion): _descripcion(descripcion),  _siguiente(nullptr){

}


void Nodo::SetSiguiente(Nodo* siguiente){
    _siguiente = siguiente;
}

std::string Nodo::GetDescripcion(){
    return _descripcion;
}

Nodo* Nodo::GetSiguiente(){
    return _siguiente;
}