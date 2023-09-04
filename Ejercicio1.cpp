#include "ejercicio1.h"


int main() {
    Lugar YPF(5.0);             // instacia un objeto Lugar con el nombre de YPF al KM 5
    Lugar SHELL(10.0);          // instacia un objeto Lugar con el nombre de SHELL al KM 10
    Lugar Atalaya(20.0);        // instacia un objeto Lugar con el nombre de Atalaya al KM 20
    
    Pepita pepita(100.0,&YPF);  // instacia un objeto Pepita con el nombre de pepita con 100 J y ubicacion inicial en YPF
    
    /*
    Los siguientes llamados son para comprobar los distintos escenarios. 
    */
    pepita.comer(2.0);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    pepita.volar(&SHELL);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    pepita.volar(&YPF);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    pepita.volar(&Atalaya);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    pepita.volar(&SHELL);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    pepita.Consulta(SHELL.NroKm());
    pepita.volar(&YPF);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    pepita.Consulta(SHELL.NroKm());
    pepita.volar(&Atalaya);
    cout << "La energía de pepita es " << pepita.MostrarEnergia() << " y se encuentra en el km " << pepita.MostrarUbicacion() <<endl;
    pepita.Consulta(Atalaya.NroKm());
    return 0;
}