/*Escriba un programa que contenga IF-ELSE y que reciba un numero entero, 
para que despliegue la palabra ALTO si el valor de la variable es 
mayor a 100 y BAJO si el valor es menor a 100*/
#include<iostream> 
using namespace std;
int main (){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    if (num>100){
        cout<<"ALTO"<<endl;
    }
    else{
        cout<<"BAJO"<<endl;
    }
    return 0;
}
