#pragma once
#include <string>

class Nodo{

private:
    Nodo* _siguiente;
    std::string _descripcion;

    public:
    
    Nodo(std::string descripcion);
    void SetSiguiente(Nodo* siguiente);
    Nodo* GetSiguiente();
    std:: string GetDescripcion();

};