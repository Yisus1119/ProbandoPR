#include "Lista.h"

Lista::Lista():_primer(nullptr), _ultimo(nullptr){

}

void Lista::Agregar(Nodo* nodo){
if (_primer == nullptr)
{
    _primer = nodo;
    _ultimo = nodo;

    /* code */
}else{
    _ultimo->SetSiguiente(nodo);
    _ultimo = nodo;
}


}


Nodo* Lista::GetPrimer(){
    return _primer;
}