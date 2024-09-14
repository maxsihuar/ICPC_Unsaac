//debemos invertir un numero de 3 cifras
/*Podemos realizar esta tarea de varias formas:
    -Funcion recursiva
    -Areglo de variables
    -Estructuras ciclicas
    -Fuerza bruta
Puesto a que solo se hacer funciones recursivas en C# y que no se inicializar un arreglo en c++
iremos por estructuras ciclicas (for)*/

#include <iostream>

using namespace std;

int main(){
    //Declamos la varaible de tipo string, ya q aunque sea un numero, sera mas facil
    //trabajar con una cadena de texto en los ciclos
    //Ademas no especifica el input :v
    string numero;
    //declaramos una variable auxiliar
    string aux_1;

    cout << "Ingrese un numero de 3 cifras : ";
    cin >> numero;

    //Comprobamos que la variable sea de 3 cifras
    if (numero.length() == 3)
    {
        //si es un numero de 3 cifras entonces recoremos la cadena de texto
        //y escribiremos el texto al revez con ayuda de una variable auxiliar
        
        cout << "el numero invertido es : ";
        for (size_t i = 0; i <= numero.length(); i++)
        {
            aux_1 = numero[3-i];
            cout << aux_1;
        }


    }else
    {
        //si no es un numero de 3 crifras volvemos a llamar al mismo metodo main
         cout << "Escribe un numero de 3 cifras mi king" << endl;
         return main();
    }
    
}