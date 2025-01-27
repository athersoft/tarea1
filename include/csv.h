#ifndef CSV_H
#define CSV_H
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "list.h"
#include "song.h"
#include "util.h"


typedef struct {
    FILE *fd;
    List *list;
}CSV;

/*  Importar canciones desde un 
 *  archivo CSV (char* nombre_archivo):
 *  El usuario ingresa el nombre del
 *  archivo y la aplicación carga 
 *  todas las canciones.
 */
List *CSVimport(char *fileName);

/*  Exportar canciones
 *  CSV(char* nombre_archivo):
 *  La aplicación exporta las canciones
 *  y sus datos a un archivo csv indicado
 *  por el usuario.
 */
void CSVexport(List *list, char *fileName);

void CSVcreate(CSV *csv);

// Menú interactivo
List *listaImportarArchivo();

CSV *CSVnew();
#endif
