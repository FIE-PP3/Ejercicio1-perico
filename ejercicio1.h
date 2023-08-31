#ifndef EJERCICIO_H
#define EJERCICIO_H

#include <iostream>

using namespace std;

class Lugar {
public:
    Lugar(float v){
    km=v;
};
    float NroKm(){
        return km;
    };
private:
    float km;
};

class Pepita {
public:
    void volar(float distancia){
        float consumo=10.0;
        consumo+=distancia;
        if( energia < consumo)
            energia=0;
        else
            energia-=consumo;
    };
    void comer(float comida){
        energia+=comida*4.0;
    };
    float MostrarEnergia(){
        return energia;
};
    float recorrido(float inicio, float final){
        if(inicio<final)
            return final-inicio;
        return inicio-final;
    }
private:
    float energia =0.0;

};
#endif