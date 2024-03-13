#include "cuadrado.h"
#include <iostream>

using namespace std; 

Cuadrado::Cuadrado(int b, int h):Figura(b,h){
    setPerimetro(b+b+h+h); 
}