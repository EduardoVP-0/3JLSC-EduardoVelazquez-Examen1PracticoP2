// 3JLSC-EduardoVelazquez-Examen1PracticoP2
//pila

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void llenarPila(vector<string>& pila, string elementos[], int capacidad, int& cima) {
    if (cima < capacidad-1) {
        cima++;
        pila[cima] = elementos[cima];
        llenarPila(pila, elementos, capacidad, cima);
    }
}

int main()
{
    int cima = -1, i;
    const int capacidad = 15;
    vector<string>pila(capacidad);

    //LA PILA SOLO RECIBIRA DATOS DE TIPO STRING 
    //DONDE USTED PREVIAMENTE DEFINIRA LOS NOMBRES DE CADA ELEMENTO DE LA PILA
    string elementos[] = { "Nombre01","Nombre02","Nombre03","Nombre04","Nombre05","Nombre06","Nombre07",
        "Nombre08","Nombre09","Nombre10","Nombre11","Nombre12","Nombre13","Nombre14","Nombre15" };

    //RECURSIVIDAD
    llenarPila(pila, elementos, capacidad, cima);

    //RECORRIDO DE LA PILA LIFO
    //ITERATIVIDAD
    cout << "Elementos de la pila: \n";
    for (i = cima; i >= 0; i--) {
        cout << pila[i] << endl;
    }

    //ELIMINAR LOS ELEMENTOS DE LA PILA
    cout << "\nEliminando elementos de la pila... \n";
    while (cima >= 0) {
        cout << "Tamano de la pila antes de eliminar: " << pila.size() << endl;
        cout << "Elemento " << pila[cima] << " ubicado en la posicion " << cima << " de la pila" << endl;
        pila.pop_back();
        cima--;
        cout << "Elemento eliminado. Tamano despues de eliminar: " << pila.size() << endl;
        cout << "\n";
    }

    system("PAUSE");
    return 0;
}
