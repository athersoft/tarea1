/* Entrada y salida estándar */
#include <stdio.h>

/* manipulación de Strings */
#include <string.h>

#include "csv.h"

// Tarea 1:
/* 
  1.- Declaración de funciones

*/


/* Agregar canción (char* nombre, char*
 * artista, char** géneros, int año, char*
 * Lista_reproducción): El usuario ingresa
 * los datos de una canción y la aplicación
 * deberá agregarla en la lista de reproducción
 * indicada por el usuario. Además debe 
 * validarse que la canción no exista
 * previamente en la lista de reproducción. 
 * */
int addSong();

/* Buscar cancion por nombre (char* nombre):
 * El usuario ingresa el nombre de una canción
 * y la aplicación muestra por pantalla todas
 * las canciones (y su respectiva información) 
 * que tengan ese nombre. Si no existe ninguna 
 * canción con ese nombre debe mostrar un aviso. 
 */
int searchSong(char *name);

/*  Buscar canción por artista (char* artista):
 *  El usuario ingresa el nombre de un artista
 *  o banda y la aplicación muestra por pantalla
 *  todas las canciones (y su respectiva 
 *  información) que pertenezcan al artista 
 *  indicado. De no existir el artista,
 *  debe mostrar un mensaje por pantalla. 
 */
int searchArtist(char *artist);

/* Buscar cancion por género (char* género):
 * El usuario ingresa el nombre de un género
 * musical y la aplicación muestra por
 * pantalla todas las canciones (y su 
 * respectiva información) que pertenezcan
 * al género indicado. De no existir el
 * género, debe mostrar un mensaje por pantalla. 
 */
int searchGenre(char *genre);

/* Eliminar cancion (char* Nombre, char* artista, int año):
 * El usuario ingresa el nombre de una canción y la
 * aplicación elimina la canción correspondiente de todas
 * las listas de reproducción correspondientes. De no 
 * existir la canción se debe mostrar un aviso por pantalla.
 */
int deleteSong(char *song, char * artist, int year);


/* Mostrar todas las canciones ():
 * Muestra todas las canciones de Helen,
 * sin importar a qué lista de
 * reproducción pertenezca. 
 */
int showAllSongs();

/* main function */
int main(){
    char in = '\0';
    printf("Reproductor de Musica\n");
    printf("i: Ingresar cancion\n");
    printf("q: Salir\n");

    while(in != '\0' ){
        switch(in) {
            case('i'):
                addSong();
                break;
            case('q'):
                exit(1);
                break;
        }

    }
    scanf("%c", &in);


    /* importamos las canciones en CSV */
    CSV csv;
    importCSV(&csv, "Canciones.csv");

    exportCSV(&csv, "Canciones.csv");

    return 0;
}
