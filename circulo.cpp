#include "circulo.h"
#include <iostream>

using namespace std; 

Circulo::Circulo(int b, int h):Figura(b,h){
    setPerimetro(r+r*3.14); 
}