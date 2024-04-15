#include <iostream>
#include <map>

/*
Un mapa es una estructura de datos que asocia claves con valores.
*/

using namespace std;

int main(){
    map<int, string> frutas; // declaramos un mapa de frutas
    frutas[1] = "arandanos";
    frutas[2] = "uvas";
    frutas[3] = "cerezas";
    frutas[4] = "sandia";

    // impresion del mapa
    cout << "Frutas: ";
    for (const auto& par : frutas){
        int clave = par.first();
        string valor = par.second();
        cout << "clave: " << clave << " valor: " << valor << " ";
    }

    /*
    metodos comunes:
    insert(): inserta un par clave-valor en el mapa.
    erase(): elimina un elemento del mapa.
    find(): devuelve un iterador al elemento si se encuentra en el mapa, si no se encuentra devuelve end().
    size(): devuelve el número de elementos en el mapa.
    */

   // buscar un elemento en el mapa
    string nombre = "cerezas";
    auto it = frutas.find(nombre);

    if (it != frutas.end()){
        cout << "\n" << nombre << " encontrado" << endl;
    }else{
        cout << "\n" << nombre << " no encontrado" << endl;
    }
    return 0;

    // eliminar un elemento del mapa
    string fruit = "uvas";
    frutas.erase(fruit);

    // union de dos mapas
    map<string , int> mapa1;
    map<string, int> mapa2;
}