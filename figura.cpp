#include "figura.h"

using namespace std; 

Figura::Figura(){
    this->b=0; 
    this->h=0; 
    this->p=0; 
};
    
Figura::Figura(int b, int h){
    this->b=b; 
    this->h=h; 
    this->p=0; 
};

void Figura::setPerimetro(float a){
    this->p=a; 
};

float Figura::getPerimetro(){
    return this->p; 
};