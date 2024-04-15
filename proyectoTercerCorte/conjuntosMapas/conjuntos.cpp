#include <iostream>
#include <set>

using namespace std;
int main(){
// utilizamos la clase set*
set<string> frutas; // declaramos un conjunto de frutas

/*
Operaciones comunes:
insert(x): inserta el elemento x en el conjunto.
erase(x): elimina el elemento x del conjunto.
find(x): devuelve un iterador al elemento x si se encuentra en el conjunto, si no se encuentra devuelve end().
size(): devuelve el número de elementos en el conjunto.
empty(): devuelve true si el conjunto está vacío, false en caso contrario.
clear(): elimina todos los elementos del conjunto.
*/

// insertamos elementos en el conjunto
frutas.insert("arandanos");
frutas.insert("uvas");
frutas.insert("cerezas");
frutas.insert("sandia");

// impresion del conjunto
cout << "Frutas: ";
for (const string &fruta : frutas){
    cout << fruta << " ";
}

// eliminar un elemento del conjunto
frutas.erase("cerezas");

// metodo find
string buscar = "arandanos";

auto it = frutas.find(buscar);
if (it != frutas.end()){
    cout << "\n" << buscar << " encontrado" << endl;
    // frutas.end devuelve un iterador al final del conjunto
}else{
    cout << "\n" << buscar << " no encontrado" << endl;
}

// conocer el tamaño del conjunto
cout << "Tamaño del conjunto: " << frutas.size() << endl;

// limpiar el conjunto
frutas.clear();

// verificar si el conjunto esta vacio
if (frutas.empty()){
    cout << "El conjunto esta vacio" << endl;

// ejercicio: crear un conjunto de canciones de reproduccion
set<string> canciones;
// tiene que tener 3 canciones
canciones.insert("Viva la vida");
canciones.insert("Yellow");
canciones.insert("Fix you");
// se agrega una
canciones.insert("Paradise");
// se eliminan dos
canciones.erase("Yellow");
// se busca una 
string buscarCancion = "Viva la vida";
auto itCancion = canciones.find(buscarCancion);
if (itCancion != canciones.end()){
    cout << buscarCancion << " encontrado" << endl;
}else{
    cout << buscarCancion << " no encontrado" << endl;
}

// operacion de interseccion, union y diferencia
set <int> A = {1, 2, 3, 4, 5};
set <int> B = {4, 5, 6, 7, 8};

// interseccion
set<int> interseccion;
for (int elemento: A){
    if (B.count(elemento)){
        interseccion.insert(elemento);
    }
}
for (int elemento: interseccion){
    cout << elemento << " ";
}

// union
set<int> union = A;
union.insert(B.begin(), B.end());
for (int elemento: union){
    cout << elemento << " ";
}

// diferencia A-B
set<int> diferencia;
set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(diferencia, diferencia.begin()));

return 0;
}

