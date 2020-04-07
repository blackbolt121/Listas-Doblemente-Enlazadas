// Lista Doblemente Enlazada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "List.h"
int main()
{
    std::cout << "Hello World!\n";
    List<int>* lista = new List<int>();
    lista->insert(0);
    lista->insert(1);
    lista->insert(2);
    lista->insert(3);
    lista->insert(4);
    lista->insert(5);
    lista->insert(6);
    lista->insert(7);
    lista->insert(8);
    lista->insert(9);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(0);
    cout <<"Tamano: " << lista->size() << endl;
    lista->pop(1);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(3);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(4);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(5);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(2);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(3);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(0);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(0);
    cout << "Tamano: " << lista->size() << endl;
    lista->pop(0);
    cout << "Tamano: " << lista->size() << endl;
    lista->show(false);
    cout << endl<<endl;
    lista->show(true);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
