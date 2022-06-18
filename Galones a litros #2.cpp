/*Escriba un programa en C++ que pregunte al usuario por un numero de galones y que despliegue
su equivalente en litros*/

#include<iostream> 
using namespace std;

int main(){
    float galones, litros;
    cout << "Ingrese los galones: ";
    cin >> galones;
    litros = galones * 3.785;
    cout << "El equivalente en litros es: " << litros << endl;
    return 0;
}
