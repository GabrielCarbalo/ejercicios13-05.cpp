#include <iostream>
using namespace std;
int main()
{
    float horas, horasmas, extra, sueldo, ganancia, impuesto, sueldot;
    string nombre;
    
    cout<< "Ingrese su nombre: ";
    cin>> nombre;
    cout<< "Ingrese las horas trabajadas: ";
    cin>> horas;

    if(horas <=160)
    {
        sueldo= horas * 10;
    }
    else if (horas > 160)
    {
        extra = horas - 160;
        horasmas = horas - extra;
        ganancia = extra * 15;
        sueldo = horasmas * 10 + ganancia;
    }

     cout << " El trabajador " << nombre << " gana en total: " << sueldo;
     
     if (sueldo <=2000)
    {
        cout << " Tu sueldo es libre de impuesto ";
    }
    else if (sueldo > 2000 , sueldo <=2000)
    {
        impuesto = sueldo * 0.2;
        sueldot = sueldo - impuesto;
        cout << "Tu sueldo paga : " << impuesto << " Y tu sueldo es: " << sueldot; 
    }
    else if (sueldo > 2201)
    {
        impuesto = sueldo * 0.3;
        sueldot = sueldo - impuesto;
        cout << "Tu sueldo paga : " << impuesto << " Y tu sueldo es: " << sueldot;
    }
    

    return 0;
}