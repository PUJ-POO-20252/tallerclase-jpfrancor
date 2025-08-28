#include <iostream>
#include "calificaciones_utils.h"

//Realizado por Martín Canizalez y Juan Pablo Franco//
const int NUM_CALIFICACIONES = 5;

int main() {
    std::string nombreEstudiante = "Juan Perez";
    double calificaciones[NUM_CALIFICACIONES] = {2.5, 4.0, 3.0, 5.0, 3.5};

    double promedio = calcularPromedio(calificaciones, NUM_CALIFICACIONES);
    double minimo = obtenerNotaMinima(calificaciones, NUM_CALIFICACIONES);
    double maximo = obtenerNotaMaxima(calificaciones, NUM_CALIFICACIONES);

    std::cout << "Calificaciones" << std::endl;
    std::cout << "Nombre del Estudiante: " << nombreEstudiante << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;
    std::cout << "Minima: " << minimo << std::endl;
    std::cout << "Maxima: " << maximo << std::endl;

    return 0;
}
