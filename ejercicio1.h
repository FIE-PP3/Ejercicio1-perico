#ifndef EJERCICIO_H
#define EJERCICIO_H

#include <iostream>

using namespace std;

class Lugar {
public:
    Lugar(float const v) : km(v) {}

    float NroKm() {
        return km;
    }
private:
    float km;
};

class Pepita {
public:
    Pepita(float e, Lugar *inicio) : energia(e), ubicacion(inicio) {}
    
    void volar(Lugar *destino) {
        float distancia = abs(destino->NroKm() - ubicacion->NroKm());
        float consumo = 10.0 + distancia;
        
        if (energia >= consumo) {
            ubicacion = destino;
            energia -= consumo;
        } else {
            cout << "No tengo suficiente energía para llegar al km " << destino->NroKm() << endl;
        }
    }
    
    void comer(float comida) {
        energia += comida * 4.0;
    }
    
    float MostrarEnergia() {
        return energia;
    }
    
    float MostrarUbicacion() {
        return ubicacion->NroKm();
    }
    
    void Consulta (float p){
        float dist;
        dist=abs(p - ubicacion->NroKm());
        if ((energia-10.0)>=dist)
            cout<<"Pepita puede ir al Km "<<p<<endl;
        else
            cout<<"Pepita puede NO ir al Km "<<p<<" me falta "<<abs(energia-10.0-dist)<<" joules o "<<abs(energia-10.0-dist)/4.0 <<" gr de comida"<<endl;
    }

private:
    float energia;
    Lugar * ubicacion;
};

#endif