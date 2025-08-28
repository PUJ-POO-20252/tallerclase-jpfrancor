//
// Created by jpfra on 28/08/25.
//

#ifndef ANALIZADORNOTAS_CALIFICACIONES_UTILS_H
#define ANALIZADORNOTAS_CALIFICACIONES_UTILS_H

#include <string>

// Calcula el promedio de un arreglo de calificaciones.
double calcularPromedio(const double arreglo[], int tamano);

// Obtiene la calificación más baja de un arreglo.
double obtenerNotaMinima(const double arreglo[], int tamano);

// Obtiene la calificación más alta de un arreglo.
double obtenerNotaMaxima(const double arreglo[], int tamano);

#endif //ANALIZADORNOTAS_CALIFICACIONES_UTILS_H