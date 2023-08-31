#include "ejercicio1.h"



int main(){
    Pepita pepita;
    pepita.comer(2.0);
    pepita.volar(12.4);
    Lugar lugar1(30.2);
    cout<<"la energia de pepita es "<< pepita.MostrarEnergia()<<" y la pizzeria esta en el km "<<lugar1.NroKm()<<endl;
    return 0;
}