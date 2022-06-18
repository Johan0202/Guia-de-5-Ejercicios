/*Una tonelada metrica equivale a 35,273.93 onzas, desarrollar un
programa que lea el peso de un paquete de cereal, asi como el numero 
de cajas necesarias para llenar una tonelada metrica de cereal, el 
programa debera pedir al usuario repetir este calculo las veces 
que desee.*/

#include<iostream> 
using namespace std;

int main ()
{
    int cajas, peso, toneladas;
    
    cout << "Ingrese el peso de la caja: ";
    cin >> peso;
    cout << "Ingrese el numero de cajas: ";
    cin >> cajas;
    
    toneladas = peso * cajas;
    
    cout << "El peso total de la tonelada es: " << toneladas << " onzas" << endl;
    
    return 0;
}
