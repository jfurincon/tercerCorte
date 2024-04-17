#include <iostream>
#include <map>

using namespace std;

/*
Clase de calificacionesUR que contiene un mapa con los nombres de los estudiantes y otro mapa con las materias y sus respectivas calificaciones
*/

class calificacionesUR {
    private:
        // Declaración de la variable estudiantes de tipo map que contiene un string como clave y un valor map que contiene un string como clave y un int como valor
        map<string, map<string, int> materias> estudiantes;

    public:
        calificacionesUR();

        // funcion para registrar una nota de un estudiante en una materia
        void registrarNota(string estudiante, string materia, int nota){
            estudiantes[estudiante][materia] = nota;
        };

        // funcion para obtener la nota de un estudiante en una materia
        int obtenerNota(string estudiante, string materia){
            return estudiantes[estudiante][materia];
        };

        // funcion para obtener el promedio de un estudiante
};