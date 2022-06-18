/*Escriba un programa que lea 10 numeros y que despliegue la suma de todos los
numeros mayores a cero, la suma de todos los numeros menores que cero, la suma
de todos los numeros ya sean positivos, negativos o cero. El usuario debe introducir 10
numeros uno a uno y los puede ingresar en cualquier orden. No se deben ingresar 
positivos y negativos de forma separada*/

#include<iostream> 
using namespace std;

int main(){
    int num, suma=0, suma2=0, suma3=0, suma4=0;
    for(int i=0; i<10; i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        if(num>0){
            suma+=num;
        }
        else if(num<0){
            suma2+=num;
        }
        else{
            suma3+=num;
        }
        suma4+=num;
    }
    cout<<"La suma de los numeros mayores a cero es: "<<suma<<endl;
    cout<<"La suma de los numeros menores que cero es: "<<suma2<<endl;
    cout<<"La suma de los numeros ya sean positivos, negativos o cero es: "<<suma3<<endl;
    cout<<"La suma de todos los numeros es: "<<suma4<<endl;
    return 0;
}
