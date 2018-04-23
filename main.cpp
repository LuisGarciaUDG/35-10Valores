/*
Programa_35 capturar 10 valores almacenados en un vector, su promedio, numero de datos mayores y lista
Estructura for y arreglos
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 11 de marzo de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system ("color f0");
    int x, prom, vec[10], cuantos;
    prom =0;
    cuantos=0;
    cout << "\n Promedio de 10 valores mostrar cuantos y cuales son mayores al promedio";
    cout << "\n\n Estructura repetitiva for \n";

    for (x=0; x<10; x=x+1)
        {
        cout<<"\n Dame un valor: ";
        cin>>vec[x];
        prom=prom+vec[x];
        }

        //system ("cls");
        prom=prom/10;
        cout<<"\n";

    for (x=0; x<10; x=x+1)
        {
        if (vec[x]>prom)
        cuantos++;
        }
        system ("pause");
        system ("cls");

        cout<<"\n\n El promedio es: "<<prom<<"\n\n";
        cout<<"\n\n La cantidad de elementos mayores al promedio son: "<<cuantos<<"\n\n";
        cout<<"\n\n";

    for (x=0; x<10; x=x+1)
        {
        if (vec[x]>prom)
            cout<<"\n Valores mayores al promedio: "<<vec[x]<<"\n";
        }

        cout<<"\n\n";
        system ("pause");

    return 0;
}
