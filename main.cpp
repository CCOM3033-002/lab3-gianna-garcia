/*
Laboratorio 3: Tres Numeros Aleatorios
Nombre: Gianna Garcia Fox
Núm. Est: 801-22-7123
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    //inicializar el generador
    srand(time(0));

    //generar los numeros aleatorios
    int num1 = rand() % (100 - 0 + 1) + 0;
    int num2 = rand() % (100 - 0 + 1) + 0;
    int num3 = rand() % (100 - 0 + 1) + 0;

    cout << "Numeros aleatorios generados: " << num1 << ", " 
    << num2 << ", " << num3 << endl;

    //declarar las variables que van a asignarle posicion a los numeros aleatorios
    int posicion1, posicion2, posicion3;

    // usando los operadores logicos, evaluamos la posicion de los numeros

    //evaluamos si el numero 1 es mayor que los otros dos
    if (num1 >= num2 && num1 >= num3) 
    {
        //del numero 1 ser mayor evalumos el dos a ver si es mayor que el tres
        //y asignamos las posiciones
        if (num2 >= num3) 
        {
            posicion1 = num1;
            posicion2 = num2;
            posicion3 = num3;
        } 
        else
        {
            posicion1 = num1;
            posicion2 = num3;
            posicion3 = num2;
        }

    } 
    //evaluamos si el numero 2 es mayor que los otros dos
    else if (num2 >= num1 && num2 >= num3) 
    {
        //de ser cierto evalumos si el uno es mayor que el tres y asignamos
        //posicion basado en eso
        if (num1 >= num3) 
        {
            posicion1 = num2;
            posicion2 = num1;
            posicion3 = num3;
        } 
        else 
        {
            posicion1 = num2;
            posicion2 = num3;
            posicion3 = num1;
        }

    } 
    // el ultimo else recibe el resultado si el numero tres es el mayor
    else 
    {
        //evalua si el uno es mayor que el dos y asigna las posiciones
       if (num1 >= num2) 
        {
            posicion1 = num3;
            posicion2 = num1;
            posicion3 = num2;
        } 
        else 
        {
            posicion1 = num3;
            posicion2 = num2;
            posicion3 = num1;
        }
    }

    // desplegar los resultados
    cout << "Orden descendiente: " << posicion1 << " >= " << posicion2 
    << " >= " << posicion3 << endl;

    return 0;
}
