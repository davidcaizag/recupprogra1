#include <stdio.h>
#include "funciones.h"  // Incluimos funciones.h para tener acceso a las funciones definidas en funciones.c

int main() {
    Producto productos[MAX_PRODUCTOS];
    int numProductos = 0;
    int opcion;

    cargarProductos(productos, &numProductos);  // Cargar productos desde el archivo al iniciar

    do {
        printf("\nSistema de Inventarios para Tienda de Abarrotes\n");
        printf("1. Ingresar Producto\n");
        printf("2. Editar Producto\n");
        printf("3. Eliminar Producto\n");
        printf("4. Listar Productos\n");
        printf("5. Salir\n");
        printf("Seleccionar una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto(productos, &numProductos);
                break;
            case 2:
                editarProducto(productos, numProductos);
                break;
            case 3:
                eliminarProducto(productos, &numProductos);
                break;
            case 4:
                listarProductos(productos, numProductos);
                break;
            case 5:
                printf("Guardando y saliendo del sistema...\n");
                guardarProductos(productos, numProductos);  // Guardar productos antes de salir
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 5);

    return 0;
}
