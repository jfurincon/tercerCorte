#include <iostream>
#include <map>

using namespace std;

// Definición de la clase MapaColombia
class mapaColombia {
    private:
    // Declaración de la variable departamentos de tipo map que contiene un string como clave y un string como valor
    // en este caso el valor sera la capital del departamento.
        map<string, string> departamentos;
    public:
        MapaColombia();

    // funcion para insertar departamento y que devuelva su capital
    string deptoCapital(string departamento){
        departamentos["Amazonas"] = "Leticia";
        departamentos["Antioquia"] = "Medellin";
        departamentos["Arauca"] = "Arauca";
        departamentos["Atlantico"] = "Barranquilla";
        departamentos["Bolivar"] = "Cartagena";
        departamentos["Boyaca"] = "Tunja";
        departamentos["Caldas"] = "Manizales";
        departamentos["Caqueta"] = "Florencia";
        departamentos["Casanare"] = "Yopal";
        departamentos["Cauca"] = "Popayan";
        departamentos["Cesar"] = "Valledupar";
        departamentos["Choco"] = "Quibdo";
        departamentos["Cordoba"] = "Monteria";
        departamentos["Cundinamarca"] = "Bogota";
        departamentos["Guainia"] = "Inirida";
        departamentos["Guaviare"] = "San Jose del Guaviare";
        departamentos["Huila"] = "Neiva";
        departamentos["La Guajira"] = "Riohacha";
        departamentos["Magdalena"] = "Santa Marta";
        departamentos["Meta"] = "Villavicencio";
        departamentos["Narino"] = "Pasto";
        departamentos["Norte de Santander"] = "Cucuta";
        departamentos["Putumayo"] = "Mocoa";
        departamentos["Quindio"] = "Armenia";
        departamentos["Risaralda"] = "Pereira";
        departamentos["San Andres y Providencia"] = "San Andres";
        departamentos["Santander"] = "Bucaramanga";
        departamentos["Sucre"] = "Sincelejo";
        departamentos["Tolima"] = "Ibague";
        departamentos["Valle del Cauca"] = "Cali";
        departamentos["Vaupes"] = "Mitú";
        departamentos["Vichada"] = "Puerto Carreño";
        return departamentos[departamento];
    } 
};