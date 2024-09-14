// se ingresan 2 numeros, los caules debemos intercambiar los valores
// este problema es mas eficiente con fuerza bruta 
// pero creo q podemos usar un algoritomo para tener como respuesta los numeros invertidos

#include <iostream>

using namespace std;

int main(){
    //declaramos 2 variables;
    int a,b;

    //Dando valor a las variables
    cout << "Ingrese el primer valor a = ";
    cin >> a;
    cout << "Ingrese el segundo valor b = ";
    cin >> b;

    // inviritiendo por medio de un algoritmo

    a = a+b;
    b = a-b;
    a = a-b;
    //Imprimiendo los valores
    cout << "a = ";
    cout << a<<endl;
    cout << "b = ";
    cout << b<<endl;
 return 0;

}