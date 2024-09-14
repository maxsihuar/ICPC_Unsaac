/*el objetivo es ingresar un numero entero 
y buscar el mayo numero par menor o igual al numero*/
#include <iostream>

using namespace std;

int main(){
    //definimos la variable
    int numero;

    cout << "ingrese un numero" << endl;

    //asignamos un valor a la variable
    cin >> numero;

    //para q el numero se par verificamos q sea divisible entre 2
    //por ende su residuo debe ser 0

    if(numero%2==0){
        //si el residuo es divisible entre 2 entonces imprimimos el numero
        cout << "El mayor numero par es:";
        cout << numero;
    }

    //caso contrario usamos el condicional else 

    else{
        cout <<"el numero no ea par, pero el mas sercano es : "<< endl;

    //Al no ser divisible entre 2

    //podemos usar el algoritmos de la division para restar el residuo y volverlo numero par
    //luego imprimiremos el numero
    // D = d*c + r
    //para q la division sea exacta entonces 
    // D-r = d*c
    
        cout << numero - numero%2 << endl;
    }
    
    return 0;
}
