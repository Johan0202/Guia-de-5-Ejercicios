/*Modifique el programa de anterior de forma que despliegue la suma de todos los numeros 
positivos y el promedio de todos los numeros positivos, la suma de todos los numeros 
negativos y el promedio de todos los numeros negativos, la suma de todas los numeros 
positivos y negativos y el promedio de todos los numeros introducidos*/

#include<iostream> 
using namespace std;

int main  () {
    int numero, sumaPositivos=0, sumaNegativos=0, contadorPositivos=0, contadorNegativos=0;
    float promedioPositivos, promedioNegativos;
    cout << "Introduce un numero: ";
    cin >> numero;
    while (numero != 0) {
        if (numero > 0) {
            sumaPositivos += numero;
            contadorPositivos++;
        }
        else {
            sumaNegativos += numero;
            contadorNegativos++;
        }
        cout << "Introduce un numero: ";
        cin >> numero;
    }
    promedioPositivos = (float)sumaPositivos / contadorPositivos;
    promedioNegativos = (float)sumaNegativos / contadorNegativos;
    cout << "La suma de los numeros positivos es: " << sumaPositivos << endl;
    cout << "El promedio de los numeros positivos es: " << promedioPositivos << endl;
    cout << "La suma de los numeros negativos es: " << sumaNegativos << endl;
    cout << "El promedio de los numeros negativos es: " << promedioNegativos << endl;
    cout << "La suma de los numeros positivos y negativos es: " << sumaPositivos + sumaNegativos << endl;
    cout << "El promedio de los numeros positivos y negativos es: " << (float)(sumaPositivos + sumaNegativos) / (contadorPositivos + contadorNegativos) << endl;
    return 0;
}
