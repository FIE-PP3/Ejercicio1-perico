#ifndef EJERCICIO_H
#define EJERCICIO_H

#include <iostream>

using namespace std;

class Pepita { // Declaración de la clase "Pepita"
public:
    Pepita(float e, Lugar *inicio) : energia(e), ubicacion(inicio) {} // Declaración del constructor
    /*  
    Función volar: recibe el destino, saca la distancia (en valor absoluto) y se fija si puede llegar o no.
    Si llega consume la enegia necesaria y se desplaza al lugar, sino avisa que no puede por falta de energia.
    */
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
    
    /*
    Función comer: carga energia (4J*1gr)
    */
    void comer(float comida) {
        energia += comida * 4.0;
    }
    /*
    Fución que devuelve la energia (float).
    */
    float MostrarEnergia() {
        return energia;
    }
    
    /*
    Función que devuelve la ubicación (float).
    */
    float MostrarUbicacion() {
        return ubicacion->NroKm();
    }
    /*
    Función que muestra por pantalla si pepita puede llegar al lugar requerido o no.
    */
    void Consulta (float p){
        float dist;
        dist=abs(p - ubicacion->NroKm());
        if ((energia-10.0)>=dist)
            cout<<"Pepita puede ir al Km "<<p<<endl;
        else
            cout<<"Pepita puede NO ir al Km "<<p<<" me falta "<<abs(energia-10.0-dist)<<" joules o "<<abs(energia-10.0-dist)/4.0 <<" gr de comida"<<endl;
    }

private:    // Atributos
    float energia;
    Lugar * ubicacion;
};

/*
Declaración de la clase Lugar
*/
class Lugar {
public:
    Lugar(float const v) : km(v) {} // Declaración del constructor
    /*
    Función que devuelve el km (float).
    */
    float NroKm() {
        return km;
    }
private:    // Atributos
    float km;
};

#endif