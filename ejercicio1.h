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
            cout << "\nNo tengo suficiente energía para llegar al km " << destino->NroKm() << endl;
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
    
private:
    float energia;
    Lugar * ubicacion;
};

#endif