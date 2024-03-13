#include "rectangulo.h"
#include <iostream>

using namespace std; 

Rectangulo::Rectangulo(int b, int h):Figura(b,h){
    setPerimetro(b+b+h+h); 
}