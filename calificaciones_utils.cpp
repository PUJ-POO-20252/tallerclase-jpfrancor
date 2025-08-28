//
// Created by jpfra on 28/08/25.
//
#include "calificaciones_utils.h"

double calcularPromedio(const double arreglo[], int tamano) {
    double sumaNotas = 0.0;
    for (int i = 0; i < tamano; i++) {
        sumaNotas += arreglo[i];
    }
    return sumaNotas / tamano;
}

double obtenerNotaMinima(const double arreglo[], int tamano) {
    double minima = arreglo[0];
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] < minima) {
            minima = arreglo[i];
        }
    }
    return minima;
}

double obtenerNotaMaxima(const double arreglo[], int tamano) {
    double maxima = arreglo[0];
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] > maxima) {
            maxima = arreglo[i];
        }
    }
    return maxima;
}