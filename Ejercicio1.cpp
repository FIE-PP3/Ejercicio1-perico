#include "ejercicio1.h"


int main() {
    Lugar YPF(5.0);
    Lugar SHELL(10.0);
    Lugar Atalaya(20.0);
    
    Pepita pepita(100.0,&YPF);
    
    pepita.comer(2.0);
    pepita.volar(&SHELL);
    pepita.volar(&YPF);
    pepita.volar(&Atalaya);
    pepita.volar(&SHELL);
    pepita.volar(&YPF);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    
    return 0;
}