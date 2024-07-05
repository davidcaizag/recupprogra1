#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define MAX_PRODUCTOS 100

typedef struct {
    char nombre[50];
    int cantidad;
    float precio;
    char categoria[30];
} Producto;

void ingresarProducto(Producto productos[], int *numProductos);
void editarProducto(Producto productos[], int numProductos);
void eliminarProducto(Producto productos[], int *numProductos);
void listarProductos(Producto productos[], int numProductos);

#endif 
